// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bme_gazebo_sensors:action/MoveAction.idl
// generated code does not contain a copyright notice

#ifndef BME_GAZEBO_SENSORS__ACTION__DETAIL__MOVE_ACTION__BUILDER_HPP_
#define BME_GAZEBO_SENSORS__ACTION__DETAIL__MOVE_ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bme_gazebo_sensors/action/detail/move_action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bme_gazebo_sensors
{

namespace action
{

namespace builder
{

class Init_MoveAction_Goal_target_coordinate
{
public:
  Init_MoveAction_Goal_target_coordinate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bme_gazebo_sensors::action::MoveAction_Goal target_coordinate(::bme_gazebo_sensors::action::MoveAction_Goal::_target_coordinate_type arg)
  {
    msg_.target_coordinate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bme_gazebo_sensors::action::MoveAction_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bme_gazebo_sensors::action::MoveAction_Goal>()
{
  return bme_gazebo_sensors::action::builder::Init_MoveAction_Goal_target_coordinate();
}

}  // namespace bme_gazebo_sensors


namespace bme_gazebo_sensors
{

namespace action
{

namespace builder
{

class Init_MoveAction_Result_final_coordinate
{
public:
  Init_MoveAction_Result_final_coordinate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bme_gazebo_sensors::action::MoveAction_Result final_coordinate(::bme_gazebo_sensors::action::MoveAction_Result::_final_coordinate_type arg)
  {
    msg_.final_coordinate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bme_gazebo_sensors::action::MoveAction_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bme_gazebo_sensors::action::MoveAction_Result>()
{
  return bme_gazebo_sensors::action::builder::Init_MoveAction_Result_final_coordinate();
}

}  // namespace bme_gazebo_sensors


namespace bme_gazebo_sensors
{

namespace action
{

namespace builder
{

class Init_MoveAction_Feedback_current_coordinate
{
public:
  Init_MoveAction_Feedback_current_coordinate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bme_gazebo_sensors::action::MoveAction_Feedback current_coordinate(::bme_gazebo_sensors::action::MoveAction_Feedback::_current_coordinate_type arg)
  {
    msg_.current_coordinate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bme_gazebo_sensors::action::MoveAction_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bme_gazebo_sensors::action::MoveAction_Feedback>()
{
  return bme_gazebo_sensors::action::builder::Init_MoveAction_Feedback_current_coordinate();
}

}  // namespace bme_gazebo_sensors


namespace bme_gazebo_sensors
{

namespace action
{

namespace builder
{

class Init_MoveAction_SendGoal_Request_goal
{
public:
  explicit Init_MoveAction_SendGoal_Request_goal(::bme_gazebo_sensors::action::MoveAction_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::bme_gazebo_sensors::action::MoveAction_SendGoal_Request goal(::bme_gazebo_sensors::action::MoveAction_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bme_gazebo_sensors::action::MoveAction_SendGoal_Request msg_;
};

class Init_MoveAction_SendGoal_Request_goal_id
{
public:
  Init_MoveAction_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveAction_SendGoal_Request_goal goal_id(::bme_gazebo_sensors::action::MoveAction_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveAction_SendGoal_Request_goal(msg_);
  }

private:
  ::bme_gazebo_sensors::action::MoveAction_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bme_gazebo_sensors::action::MoveAction_SendGoal_Request>()
{
  return bme_gazebo_sensors::action::builder::Init_MoveAction_SendGoal_Request_goal_id();
}

}  // namespace bme_gazebo_sensors


namespace bme_gazebo_sensors
{

namespace action
{

namespace builder
{

class Init_MoveAction_SendGoal_Response_stamp
{
public:
  explicit Init_MoveAction_SendGoal_Response_stamp(::bme_gazebo_sensors::action::MoveAction_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::bme_gazebo_sensors::action::MoveAction_SendGoal_Response stamp(::bme_gazebo_sensors::action::MoveAction_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bme_gazebo_sensors::action::MoveAction_SendGoal_Response msg_;
};

class Init_MoveAction_SendGoal_Response_accepted
{
public:
  Init_MoveAction_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveAction_SendGoal_Response_stamp accepted(::bme_gazebo_sensors::action::MoveAction_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveAction_SendGoal_Response_stamp(msg_);
  }

private:
  ::bme_gazebo_sensors::action::MoveAction_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bme_gazebo_sensors::action::MoveAction_SendGoal_Response>()
{
  return bme_gazebo_sensors::action::builder::Init_MoveAction_SendGoal_Response_accepted();
}

}  // namespace bme_gazebo_sensors


namespace bme_gazebo_sensors
{

namespace action
{

namespace builder
{

class Init_MoveAction_GetResult_Request_goal_id
{
public:
  Init_MoveAction_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bme_gazebo_sensors::action::MoveAction_GetResult_Request goal_id(::bme_gazebo_sensors::action::MoveAction_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bme_gazebo_sensors::action::MoveAction_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bme_gazebo_sensors::action::MoveAction_GetResult_Request>()
{
  return bme_gazebo_sensors::action::builder::Init_MoveAction_GetResult_Request_goal_id();
}

}  // namespace bme_gazebo_sensors


namespace bme_gazebo_sensors
{

namespace action
{

namespace builder
{

class Init_MoveAction_GetResult_Response_result
{
public:
  explicit Init_MoveAction_GetResult_Response_result(::bme_gazebo_sensors::action::MoveAction_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::bme_gazebo_sensors::action::MoveAction_GetResult_Response result(::bme_gazebo_sensors::action::MoveAction_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bme_gazebo_sensors::action::MoveAction_GetResult_Response msg_;
};

class Init_MoveAction_GetResult_Response_status
{
public:
  Init_MoveAction_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveAction_GetResult_Response_result status(::bme_gazebo_sensors::action::MoveAction_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveAction_GetResult_Response_result(msg_);
  }

private:
  ::bme_gazebo_sensors::action::MoveAction_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bme_gazebo_sensors::action::MoveAction_GetResult_Response>()
{
  return bme_gazebo_sensors::action::builder::Init_MoveAction_GetResult_Response_status();
}

}  // namespace bme_gazebo_sensors


namespace bme_gazebo_sensors
{

namespace action
{

namespace builder
{

class Init_MoveAction_FeedbackMessage_feedback
{
public:
  explicit Init_MoveAction_FeedbackMessage_feedback(::bme_gazebo_sensors::action::MoveAction_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::bme_gazebo_sensors::action::MoveAction_FeedbackMessage feedback(::bme_gazebo_sensors::action::MoveAction_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bme_gazebo_sensors::action::MoveAction_FeedbackMessage msg_;
};

class Init_MoveAction_FeedbackMessage_goal_id
{
public:
  Init_MoveAction_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveAction_FeedbackMessage_feedback goal_id(::bme_gazebo_sensors::action::MoveAction_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveAction_FeedbackMessage_feedback(msg_);
  }

private:
  ::bme_gazebo_sensors::action::MoveAction_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bme_gazebo_sensors::action::MoveAction_FeedbackMessage>()
{
  return bme_gazebo_sensors::action::builder::Init_MoveAction_FeedbackMessage_goal_id();
}

}  // namespace bme_gazebo_sensors

#endif  // BME_GAZEBO_SENSORS__ACTION__DETAIL__MOVE_ACTION__BUILDER_HPP_
