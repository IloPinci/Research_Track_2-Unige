#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <rclcpp_components/register_node_macro.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <tf2_ros/transform_listener.h>
#include <tf2_ros/buffer.h>
#include <tf2/utils.h>
#include <a1_pkg/action/move_pose.hpp>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <thread>
#include <cmath>

namespace a1_pkg
{
class PoseServerComponent : public rclcpp::Node
{
public:
  using MovePose = a1_pkg::action::MovePose;
  using GoalHandleMove = rclcpp_action::ServerGoalHandle<MovePose>;

  explicit PoseServerComponent(const rclcpp::NodeOptions & options)
  : Node("pose_server_component", options)
  {
    tf_buffer_ = std::make_shared<tf2_ros::Buffer>(this->get_clock());
    tf_listener_ = std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);
    cmd_vel_pub_ = this->create_publisher<geometry_msgs::msg::Twist>("/cmd_vel", 10);

    action_server_ = rclcpp_action::create_server<MovePose>(
      this, "move_to_pose",
      std::bind(&PoseServerComponent::handle_goal, this,
        std::placeholders::_1, std::placeholders::_2),
      std::bind(&PoseServerComponent::handle_cancel, this,
        std::placeholders::_1),
      std::bind(&PoseServerComponent::handle_accepted, this,
        std::placeholders::_1)
    );

    RCLCPP_INFO(this->get_logger(), "PoseServerComponent started");
  }

private:
  std::shared_ptr<tf2_ros::Buffer> tf_buffer_;
  std::shared_ptr<tf2_ros::TransformListener> tf_listener_;
  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_pub_;
  rclcpp_action::Server<MovePose>::SharedPtr action_server_;

  rclcpp_action::GoalResponse handle_goal(
    const rclcpp_action::GoalUUID & /*uuid*/,
    std::shared_ptr<const MovePose::Goal> goal)
  {
    RCLCPP_INFO(this->get_logger(), "Received goal: x=%.2f, y=%.2f, theta=%.2f",
      goal->target_x, goal->target_y, goal->target_theta);
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  rclcpp_action::CancelResponse handle_cancel(
    const std::shared_ptr<GoalHandleMove> /*goal_handle*/)
  {
    RCLCPP_INFO(this->get_logger(), "Goal cancelled");
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  void handle_accepted(const std::shared_ptr<GoalHandleMove> goal_handle)
  {
    std::thread{
      std::bind(&PoseServerComponent::execute, this, std::placeholders::_1),
      goal_handle
    }.detach();
  }

  void execute(const std::shared_ptr<GoalHandleMove> goal_handle)
  {
    rclcpp::Rate loop_rate(10);
    const auto goal = goal_handle->get_goal();
    auto feedback = std::make_shared<MovePose::Feedback>();
    auto result = std::make_shared<MovePose::Result>();

    RCLCPP_INFO(this->get_logger(), "Executing goal: x=%.2f, y=%.2f, theta=%.2f",
      goal->target_x, goal->target_y, goal->target_theta);

    while (rclcpp::ok()) {
      if (goal_handle->is_canceling()) {
        stop_robot();
        result->success = false;
        goal_handle->canceled(result);
        RCLCPP_INFO(this->get_logger(), "Goal canceled");
        return;
      }

      geometry_msgs::msg::TransformStamped transform;
      try {
        transform = tf_buffer_->lookupTransform(
          "odom", "base_footprint", tf2::TimePointZero);
      } catch (const tf2::TransformException & ex) {
        RCLCPP_WARN(this->get_logger(), "TF lookup failed: %s", ex.what());
        loop_rate.sleep();
        continue;
      }

      double current_x = transform.transform.translation.x;
      double current_y = transform.transform.translation.y;
      double current_yaw = tf2::getYaw(transform.transform.rotation);

      double dx = goal->target_x - current_x;
      double dy = goal->target_y - current_y;
      double distance = std::hypot(dx, dy);

      geometry_msgs::msg::Twist twist;

      if (distance > 0.1) {
        double target_yaw = std::atan2(dy, dx);
        double angular_error = target_yaw - current_yaw;

        while (angular_error > M_PI)  angular_error -= 2.0 * M_PI;
        while (angular_error < -M_PI) angular_error += 2.0 * M_PI;

        twist.linear.x  = std::min(0.5 * distance, 0.5);
        twist.angular.z = 1.0 * angular_error;

        RCLCPP_INFO(this->get_logger(),
          "Position Phase: (%.2f, %.2f), Distance: %.2f",
          current_x, current_y, distance);
      } else {
        double final_angular_error = goal->target_theta - current_yaw;

        while (final_angular_error > M_PI)  final_angular_error -= 2.0 * M_PI;
        while (final_angular_error < -M_PI) final_angular_error += 2.0 * M_PI;

        if (std::abs(final_angular_error) < 0.05) {
          break;
        }

        twist.linear.x = 0.0;
        twist.angular.z = 1.0 * final_angular_error;

        RCLCPP_INFO(this->get_logger(),
          "Orientation Phase: Target=%.2f, Current=%.2f, Error=%.2f",
          goal->target_theta, current_yaw, final_angular_error);
      }

      cmd_vel_pub_->publish(twist);

      feedback->current_x = current_x;
      feedback->current_y = current_y;
      feedback->current_theta = current_yaw;
      goal_handle->publish_feedback(feedback);

      loop_rate.sleep();
    }

    if (rclcpp::ok()) {
      stop_robot();
      result->success = true;
      goal_handle->succeed(result);
      RCLCPP_INFO(this->get_logger(), "Goal reached!");
    }
  }

  void stop_robot()
  {
    geometry_msgs::msg::Twist twist;
    cmd_vel_pub_->publish(twist);
  }
};
}  // namespace a1_pkg

RCLCPP_COMPONENTS_REGISTER_NODE(a1_pkg::PoseServerComponent)