#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <rclcpp_components/register_node_macro.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <components_package/action/move_action.hpp>
#include <thread>
#include <atomic>

namespace components_package
{
class MoveRobotXServer : public rclcpp::Node
{
public:
  using MoveAction = components_package::action::MoveAction;
  using GoalHandleMove = rclcpp_action::ServerGoalHandle<MoveAction>;

  explicit MoveRobotXServer(const rclcpp::NodeOptions & options)
  : Node("action_server", options), current_coordinate_(0.0)
  {
    odom_sub_ = this->create_subscription<nav_msgs::msg::Odometry>(
      "/odom", 10,
      std::bind(&MoveRobotXServer::odom_callback, this, std::placeholders::_1));

    cmd_vel_pub_ = this->create_publisher<geometry_msgs::msg::Twist>("/cmd_vel", 10);

    action_server_ = rclcpp_action::create_server<MoveAction>(
      this,
      "move_to_x",
      std::bind(&MoveRobotXServer::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
      std::bind(&MoveRobotXServer::handle_cancel, this, std::placeholders::_1),
      std::bind(&MoveRobotXServer::handle_accepted, this, std::placeholders::_1)
    );
  }

private:
  rclcpp_action::Server<MoveAction>::SharedPtr action_server_;
  rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_sub_;
  rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_pub_;
  std::atomic<double> current_coordinate_;

  void odom_callback(const nav_msgs::msg::Odometry::SharedPtr msg) {
    current_coordinate_ = msg->pose.pose.position.x;
  }

  rclcpp_action::GoalResponse handle_goal(
    const rclcpp_action::GoalUUID & uuid,
    std::shared_ptr<const MoveAction::Goal> goal)
  {
    (void)uuid;
    RCLCPP_INFO(this->get_logger(), "Received goal: %.2f", goal->target_coordinate);
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  rclcpp_action::CancelResponse handle_cancel(
    const std::shared_ptr<GoalHandleMove> goal_handle)
  {
    (void)goal_handle;
    RCLCPP_INFO(this->get_logger(), "Received cancel request.");
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  void handle_accepted(const std::shared_ptr<GoalHandleMove> goal_handle)
  {
    std::thread{std::bind(&MoveRobotXServer::execute, this, std::placeholders::_1), goal_handle}.detach();
  }

  void execute(const std::shared_ptr<GoalHandleMove> goal_handle)
  {
    rclcpp::Rate loop_rate(10);
    const auto goal = goal_handle->get_goal();
    auto feedback = std::make_shared<MoveAction::Feedback>();
    auto result = std::make_shared<MoveAction::Result>();

    geometry_msgs::msg::Twist twist;
    double target_x = goal->target_coordinate;
    twist.linear.x = (target_x > current_coordinate_) ? 0.2 : -0.2;

    while (rclcpp::ok()) {
      if (goal_handle->is_canceling()) {
        stop_robot();
        result->final_coordinate = current_coordinate_;
        goal_handle->canceled(result);
        RCLCPP_INFO(this->get_logger(), "Goal cancelled.");
        return;
      }

      if ((twist.linear.x > 0 && current_coordinate_ >= target_x) ||
          (twist.linear.x < 0 && current_coordinate_ <= target_x)) {
        break;
      }

      cmd_vel_pub_->publish(twist);
      feedback->current_coordinate = current_coordinate_;
      goal_handle->publish_feedback(feedback);
      
      loop_rate.sleep();
    }

    if (rclcpp::ok()) {
      stop_robot();
      result->final_coordinate = current_coordinate_;
      goal_handle->succeed(result);
      RCLCPP_INFO(this->get_logger(), "Goal reached: %.2f", result->final_coordinate);
    }
  }

  void stop_robot() {
    geometry_msgs::msg::Twist twist;
    cmd_vel_pub_->publish(twist);
  }
};
}

RCLCPP_COMPONENTS_REGISTER_NODE(components_package::MoveRobotXServer)