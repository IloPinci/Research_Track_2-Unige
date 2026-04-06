// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bme_gazebo_sensors:action/MoveAction.idl
// generated code does not contain a copyright notice

#ifndef BME_GAZEBO_SENSORS__ACTION__DETAIL__MOVE_ACTION__TRAITS_HPP_
#define BME_GAZEBO_SENSORS__ACTION__DETAIL__MOVE_ACTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bme_gazebo_sensors/action/detail/move_action__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bme_gazebo_sensors
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveAction_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_coordinate
  {
    out << "target_coordinate: ";
    rosidl_generator_traits::value_to_yaml(msg.target_coordinate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveAction_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_coordinate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_coordinate: ";
    rosidl_generator_traits::value_to_yaml(msg.target_coordinate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveAction_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace bme_gazebo_sensors

namespace rosidl_generator_traits
{

[[deprecated("use bme_gazebo_sensors::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bme_gazebo_sensors::action::MoveAction_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  bme_gazebo_sensors::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bme_gazebo_sensors::action::to_yaml() instead")]]
inline std::string to_yaml(const bme_gazebo_sensors::action::MoveAction_Goal & msg)
{
  return bme_gazebo_sensors::action::to_yaml(msg);
}

template<>
inline const char * data_type<bme_gazebo_sensors::action::MoveAction_Goal>()
{
  return "bme_gazebo_sensors::action::MoveAction_Goal";
}

template<>
inline const char * name<bme_gazebo_sensors::action::MoveAction_Goal>()
{
  return "bme_gazebo_sensors/action/MoveAction_Goal";
}

template<>
struct has_fixed_size<bme_gazebo_sensors::action::MoveAction_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bme_gazebo_sensors::action::MoveAction_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bme_gazebo_sensors::action::MoveAction_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace bme_gazebo_sensors
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveAction_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: final_coordinate
  {
    out << "final_coordinate: ";
    rosidl_generator_traits::value_to_yaml(msg.final_coordinate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveAction_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: final_coordinate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final_coordinate: ";
    rosidl_generator_traits::value_to_yaml(msg.final_coordinate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveAction_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace bme_gazebo_sensors

namespace rosidl_generator_traits
{

[[deprecated("use bme_gazebo_sensors::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bme_gazebo_sensors::action::MoveAction_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  bme_gazebo_sensors::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bme_gazebo_sensors::action::to_yaml() instead")]]
inline std::string to_yaml(const bme_gazebo_sensors::action::MoveAction_Result & msg)
{
  return bme_gazebo_sensors::action::to_yaml(msg);
}

template<>
inline const char * data_type<bme_gazebo_sensors::action::MoveAction_Result>()
{
  return "bme_gazebo_sensors::action::MoveAction_Result";
}

template<>
inline const char * name<bme_gazebo_sensors::action::MoveAction_Result>()
{
  return "bme_gazebo_sensors/action/MoveAction_Result";
}

template<>
struct has_fixed_size<bme_gazebo_sensors::action::MoveAction_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bme_gazebo_sensors::action::MoveAction_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bme_gazebo_sensors::action::MoveAction_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace bme_gazebo_sensors
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveAction_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_coordinate
  {
    out << "current_coordinate: ";
    rosidl_generator_traits::value_to_yaml(msg.current_coordinate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveAction_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_coordinate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_coordinate: ";
    rosidl_generator_traits::value_to_yaml(msg.current_coordinate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveAction_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace bme_gazebo_sensors

namespace rosidl_generator_traits
{

[[deprecated("use bme_gazebo_sensors::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bme_gazebo_sensors::action::MoveAction_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  bme_gazebo_sensors::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bme_gazebo_sensors::action::to_yaml() instead")]]
inline std::string to_yaml(const bme_gazebo_sensors::action::MoveAction_Feedback & msg)
{
  return bme_gazebo_sensors::action::to_yaml(msg);
}

template<>
inline const char * data_type<bme_gazebo_sensors::action::MoveAction_Feedback>()
{
  return "bme_gazebo_sensors::action::MoveAction_Feedback";
}

template<>
inline const char * name<bme_gazebo_sensors::action::MoveAction_Feedback>()
{
  return "bme_gazebo_sensors/action/MoveAction_Feedback";
}

template<>
struct has_fixed_size<bme_gazebo_sensors::action::MoveAction_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bme_gazebo_sensors::action::MoveAction_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bme_gazebo_sensors::action::MoveAction_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "bme_gazebo_sensors/action/detail/move_action__traits.hpp"

namespace bme_gazebo_sensors
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveAction_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveAction_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveAction_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace bme_gazebo_sensors

namespace rosidl_generator_traits
{

[[deprecated("use bme_gazebo_sensors::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bme_gazebo_sensors::action::MoveAction_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  bme_gazebo_sensors::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bme_gazebo_sensors::action::to_yaml() instead")]]
inline std::string to_yaml(const bme_gazebo_sensors::action::MoveAction_SendGoal_Request & msg)
{
  return bme_gazebo_sensors::action::to_yaml(msg);
}

template<>
inline const char * data_type<bme_gazebo_sensors::action::MoveAction_SendGoal_Request>()
{
  return "bme_gazebo_sensors::action::MoveAction_SendGoal_Request";
}

template<>
inline const char * name<bme_gazebo_sensors::action::MoveAction_SendGoal_Request>()
{
  return "bme_gazebo_sensors/action/MoveAction_SendGoal_Request";
}

template<>
struct has_fixed_size<bme_gazebo_sensors::action::MoveAction_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<bme_gazebo_sensors::action::MoveAction_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<bme_gazebo_sensors::action::MoveAction_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<bme_gazebo_sensors::action::MoveAction_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<bme_gazebo_sensors::action::MoveAction_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace bme_gazebo_sensors
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveAction_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveAction_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveAction_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace bme_gazebo_sensors

namespace rosidl_generator_traits
{

[[deprecated("use bme_gazebo_sensors::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bme_gazebo_sensors::action::MoveAction_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  bme_gazebo_sensors::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bme_gazebo_sensors::action::to_yaml() instead")]]
inline std::string to_yaml(const bme_gazebo_sensors::action::MoveAction_SendGoal_Response & msg)
{
  return bme_gazebo_sensors::action::to_yaml(msg);
}

template<>
inline const char * data_type<bme_gazebo_sensors::action::MoveAction_SendGoal_Response>()
{
  return "bme_gazebo_sensors::action::MoveAction_SendGoal_Response";
}

template<>
inline const char * name<bme_gazebo_sensors::action::MoveAction_SendGoal_Response>()
{
  return "bme_gazebo_sensors/action/MoveAction_SendGoal_Response";
}

template<>
struct has_fixed_size<bme_gazebo_sensors::action::MoveAction_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<bme_gazebo_sensors::action::MoveAction_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<bme_gazebo_sensors::action::MoveAction_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bme_gazebo_sensors::action::MoveAction_SendGoal>()
{
  return "bme_gazebo_sensors::action::MoveAction_SendGoal";
}

template<>
inline const char * name<bme_gazebo_sensors::action::MoveAction_SendGoal>()
{
  return "bme_gazebo_sensors/action/MoveAction_SendGoal";
}

template<>
struct has_fixed_size<bme_gazebo_sensors::action::MoveAction_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<bme_gazebo_sensors::action::MoveAction_SendGoal_Request>::value &&
    has_fixed_size<bme_gazebo_sensors::action::MoveAction_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<bme_gazebo_sensors::action::MoveAction_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<bme_gazebo_sensors::action::MoveAction_SendGoal_Request>::value &&
    has_bounded_size<bme_gazebo_sensors::action::MoveAction_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<bme_gazebo_sensors::action::MoveAction_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<bme_gazebo_sensors::action::MoveAction_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<bme_gazebo_sensors::action::MoveAction_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace bme_gazebo_sensors
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveAction_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveAction_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveAction_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace bme_gazebo_sensors

namespace rosidl_generator_traits
{

[[deprecated("use bme_gazebo_sensors::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bme_gazebo_sensors::action::MoveAction_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  bme_gazebo_sensors::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bme_gazebo_sensors::action::to_yaml() instead")]]
inline std::string to_yaml(const bme_gazebo_sensors::action::MoveAction_GetResult_Request & msg)
{
  return bme_gazebo_sensors::action::to_yaml(msg);
}

template<>
inline const char * data_type<bme_gazebo_sensors::action::MoveAction_GetResult_Request>()
{
  return "bme_gazebo_sensors::action::MoveAction_GetResult_Request";
}

template<>
inline const char * name<bme_gazebo_sensors::action::MoveAction_GetResult_Request>()
{
  return "bme_gazebo_sensors/action/MoveAction_GetResult_Request";
}

template<>
struct has_fixed_size<bme_gazebo_sensors::action::MoveAction_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<bme_gazebo_sensors::action::MoveAction_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<bme_gazebo_sensors::action::MoveAction_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__traits.hpp"

namespace bme_gazebo_sensors
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveAction_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveAction_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveAction_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace bme_gazebo_sensors

namespace rosidl_generator_traits
{

[[deprecated("use bme_gazebo_sensors::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bme_gazebo_sensors::action::MoveAction_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  bme_gazebo_sensors::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bme_gazebo_sensors::action::to_yaml() instead")]]
inline std::string to_yaml(const bme_gazebo_sensors::action::MoveAction_GetResult_Response & msg)
{
  return bme_gazebo_sensors::action::to_yaml(msg);
}

template<>
inline const char * data_type<bme_gazebo_sensors::action::MoveAction_GetResult_Response>()
{
  return "bme_gazebo_sensors::action::MoveAction_GetResult_Response";
}

template<>
inline const char * name<bme_gazebo_sensors::action::MoveAction_GetResult_Response>()
{
  return "bme_gazebo_sensors/action/MoveAction_GetResult_Response";
}

template<>
struct has_fixed_size<bme_gazebo_sensors::action::MoveAction_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<bme_gazebo_sensors::action::MoveAction_Result>::value> {};

template<>
struct has_bounded_size<bme_gazebo_sensors::action::MoveAction_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<bme_gazebo_sensors::action::MoveAction_Result>::value> {};

template<>
struct is_message<bme_gazebo_sensors::action::MoveAction_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bme_gazebo_sensors::action::MoveAction_GetResult>()
{
  return "bme_gazebo_sensors::action::MoveAction_GetResult";
}

template<>
inline const char * name<bme_gazebo_sensors::action::MoveAction_GetResult>()
{
  return "bme_gazebo_sensors/action/MoveAction_GetResult";
}

template<>
struct has_fixed_size<bme_gazebo_sensors::action::MoveAction_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<bme_gazebo_sensors::action::MoveAction_GetResult_Request>::value &&
    has_fixed_size<bme_gazebo_sensors::action::MoveAction_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<bme_gazebo_sensors::action::MoveAction_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<bme_gazebo_sensors::action::MoveAction_GetResult_Request>::value &&
    has_bounded_size<bme_gazebo_sensors::action::MoveAction_GetResult_Response>::value
  >
{
};

template<>
struct is_service<bme_gazebo_sensors::action::MoveAction_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<bme_gazebo_sensors::action::MoveAction_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<bme_gazebo_sensors::action::MoveAction_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__traits.hpp"

namespace bme_gazebo_sensors
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveAction_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveAction_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveAction_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace bme_gazebo_sensors

namespace rosidl_generator_traits
{

[[deprecated("use bme_gazebo_sensors::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bme_gazebo_sensors::action::MoveAction_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  bme_gazebo_sensors::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bme_gazebo_sensors::action::to_yaml() instead")]]
inline std::string to_yaml(const bme_gazebo_sensors::action::MoveAction_FeedbackMessage & msg)
{
  return bme_gazebo_sensors::action::to_yaml(msg);
}

template<>
inline const char * data_type<bme_gazebo_sensors::action::MoveAction_FeedbackMessage>()
{
  return "bme_gazebo_sensors::action::MoveAction_FeedbackMessage";
}

template<>
inline const char * name<bme_gazebo_sensors::action::MoveAction_FeedbackMessage>()
{
  return "bme_gazebo_sensors/action/MoveAction_FeedbackMessage";
}

template<>
struct has_fixed_size<bme_gazebo_sensors::action::MoveAction_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<bme_gazebo_sensors::action::MoveAction_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<bme_gazebo_sensors::action::MoveAction_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<bme_gazebo_sensors::action::MoveAction_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<bme_gazebo_sensors::action::MoveAction_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<bme_gazebo_sensors::action::MoveAction>
  : std::true_type
{
};

template<>
struct is_action_goal<bme_gazebo_sensors::action::MoveAction_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<bme_gazebo_sensors::action::MoveAction_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<bme_gazebo_sensors::action::MoveAction_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // BME_GAZEBO_SENSORS__ACTION__DETAIL__MOVE_ACTION__TRAITS_HPP_
