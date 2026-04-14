#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <rclcpp_components/register_node_macro.hpp>
#include <components_package/action/move_action.hpp>

namespace components_package
{
class MoveRobotXClient : public rclcpp::Node
{
public:
  using MoveAction = components_package::action::MoveAction;
  using GoalHandleMove = rclcpp_action::ClientGoalHandle<MoveAction>;

  explicit MoveRobotXClient(const rclcpp::NodeOptions & options)
  : Node("action_client", options)
  {
    client_ptr_ = rclcpp_action::create_client<MoveAction>(this, "move_to_x");
    timer_ = this->create_wall_timer(
      std::chrono::milliseconds(500),
      std::bind(&MoveRobotXClient::send_goal, this));
  }

private:
  rclcpp_action::Client<MoveAction>::SharedPtr client_ptr_;
  rclcpp::TimerBase::SharedPtr timer_;

  void send_goal()
  {
    timer_->cancel();
    if (!client_ptr_->wait_for_action_server(std::chrono::seconds(10))) {
      RCLCPP_ERROR(this->get_logger(), "Action server not available.");
      return;
    }

    auto goal_msg = MoveAction::Goal();
    goal_msg.target_coordinate = 5.0; 

    RCLCPP_INFO(this->get_logger(), "Sending goal: %.2f", goal_msg.target_coordinate);

    auto send_goal_options = rclcpp_action::Client<MoveAction>::SendGoalOptions();
    send_goal_options.goal_response_callback =
      std::bind(&MoveRobotXClient::goal_response_callback, this, std::placeholders::_1);
    send_goal_options.feedback_callback =
      std::bind(&MoveRobotXClient::feedback_callback, this, std::placeholders::_1, std::placeholders::_2);
    send_goal_options.result_callback =
      std::bind(&MoveRobotXClient::result_callback, this, std::placeholders::_1);

    client_ptr_->async_send_goal(goal_msg, send_goal_options);
  }

  void goal_response_callback(const GoalHandleMove::SharedPtr & goal_handle)
  {
    if (!goal_handle) {
      RCLCPP_ERROR(this->get_logger(), "Goal was rejected by server.");
    } else {
      RCLCPP_INFO(this->get_logger(), "Goal accepted by server, waiting for result.");
    }
  }

  void feedback_callback(
    GoalHandleMove::SharedPtr,
    const std::shared_ptr<const MoveAction::Feedback> feedback)
  {
    RCLCPP_INFO(this->get_logger(), "Current x: %.2f", feedback->current_coordinate);
  }

  void result_callback(const GoalHandleMove::WrappedResult & result)
  {
    switch (result.code) {
      case rclcpp_action::ResultCode::SUCCEEDED:
        RCLCPP_INFO(this->get_logger(), "Goal succeeded. Final x: %.2f", result.result->final_coordinate);
        break;
      case rclcpp_action::ResultCode::ABORTED:
        RCLCPP_ERROR(this->get_logger(), "Goal was aborted.");
        break;
      case rclcpp_action::ResultCode::CANCELED:
        RCLCPP_ERROR(this->get_logger(), "Goal was canceled.");
        break;
      default:
        RCLCPP_ERROR(this->get_logger(), "Unknown result code.");
        break;
    }
  }
};
}

RCLCPP_COMPONENTS_REGISTER_NODE(components_package::MoveRobotXClient)