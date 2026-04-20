#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <rclcpp_components/register_node_macro.hpp>
#include <a1_pkg/action/move_pose.hpp>
#include <geometry_msgs/msg/pose2_d.hpp>
#include <std_msgs/msg/bool.hpp>

namespace a1_pkg
{
class PoseClientComponent : public rclcpp::Node
{
public:
  using MovePose = a1_pkg::action::MovePose;
  using GoalHandleMove = rclcpp_action::ClientGoalHandle<MovePose>;

  explicit PoseClientComponent(const rclcpp::NodeOptions & options)
  : Node("pose_client_component", options)
  {
    client_ptr_ = rclcpp_action::create_client<MovePose>(this, "move_to_pose");

    pose_sub_ = this->create_subscription<geometry_msgs::msg::Pose2D>(
      "/target_pose", 10,
      std::bind(&PoseClientComponent::pose_callback, this, std::placeholders::_1));

    cancel_sub_ = this->create_subscription<std_msgs::msg::Bool>(
      "/cancel_goal", 10,
      std::bind(&PoseClientComponent::cancel_callback, this, std::placeholders::_1));

    RCLCPP_INFO(this->get_logger(), "PoseClientComponent started");
  }

private:
  rclcpp_action::Client<MovePose>::SharedPtr client_ptr_;
  rclcpp::Subscription<geometry_msgs::msg::Pose2D>::SharedPtr pose_sub_;
  rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr cancel_sub_;

  // Keep track of the current goal handle so we can cancel it
  std::shared_ptr<GoalHandleMove> current_goal_handle_;

  void pose_callback(const geometry_msgs::msg::Pose2D::SharedPtr msg)
  {
    if (!client_ptr_->wait_for_action_server(std::chrono::seconds(2))) {
      RCLCPP_ERROR(this->get_logger(), "Action server not available");
      return;
    }

    // Cancel any active goal before sending a new one
    if (current_goal_handle_) {
      client_ptr_->async_cancel_goal(current_goal_handle_);
      current_goal_handle_ = nullptr;
      RCLCPP_INFO(this->get_logger(), "Previous goal cancelled");
    }

    auto goal_msg = MovePose::Goal();
    goal_msg.target_x = msg->x;
    goal_msg.target_y = msg->y;

    RCLCPP_INFO(this->get_logger(), "Sending goal: x=%.2f, y=%.2f",
      goal_msg.target_x, goal_msg.target_y);

    auto send_goal_options = rclcpp_action::Client<MovePose>::SendGoalOptions();

    send_goal_options.goal_response_callback =
      [this](const std::shared_ptr<GoalHandleMove> goal_handle) {
        if (!goal_handle) {
          RCLCPP_ERROR(this->get_logger(), "Goal was rejected by server");
          return;
        }
        current_goal_handle_ = goal_handle;
        RCLCPP_INFO(this->get_logger(), "Goal accepted");
      };

    send_goal_options.feedback_callback =
      [this](GoalHandleMove::SharedPtr,
             const std::shared_ptr<const MovePose::Feedback> feedback) {
        RCLCPP_INFO(this->get_logger(), "Feedback: (%.2f, %.2f)",
          feedback->current_x, feedback->current_y);
      };

    send_goal_options.result_callback =
      [this](const GoalHandleMove::WrappedResult & result) {
        current_goal_handle_ = nullptr;
        if (result.result->success) {
          RCLCPP_INFO(this->get_logger(), "Goal succeeded!");
        } else {
          RCLCPP_INFO(this->get_logger(), "Goal failed or was cancelled");
        }
      };

    client_ptr_->async_send_goal(goal_msg, send_goal_options);
  }

  void cancel_callback(const std_msgs::msg::Bool::SharedPtr msg)
  {
    if (!msg->data) return;

    if (current_goal_handle_) {
      client_ptr_->async_cancel_goal(current_goal_handle_);
      current_goal_handle_ = nullptr;
      RCLCPP_INFO(this->get_logger(), "Goal cancel requested by user");
    } else {
      RCLCPP_INFO(this->get_logger(), "No active goal to cancel");
    }
  }
};
}  // namespace a1_pkg

RCLCPP_COMPONENTS_REGISTER_NODE(a1_pkg::PoseClientComponent)