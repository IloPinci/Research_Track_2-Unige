#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <rclcpp_components/register_node_macro.hpp>
#include <a1_pkg/action/move_pose.hpp>
#include <geometry_msgs/msg/pose2_d.hpp>

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
  }

private:
  rclcpp_action::Client<MovePose>::SharedPtr client_ptr_;
  rclcpp::Subscription<geometry_msgs::msg::Pose2D>::SharedPtr pose_sub_;

  void pose_callback(const geometry_msgs::msg::Pose2D::SharedPtr msg)
  {
    if (!client_ptr_->wait_for_action_server(std::chrono::seconds(2))) {
      return;
    }

    auto goal_msg = MovePose::Goal();
    goal_msg.target_x = msg->x;
    goal_msg.target_y = msg->y;

    auto send_goal_options = rclcpp_action::Client<MovePose>::SendGoalOptions();
    client_ptr_->async_send_goal(goal_msg, send_goal_options);
  }
};
}

RCLCPP_COMPONENTS_REGISTER_NODE(a1_pkg::PoseClientComponent)