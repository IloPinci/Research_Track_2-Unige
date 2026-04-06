// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bme_gazebo_sensors:action/MoveAction.idl
// generated code does not contain a copyright notice

#ifndef BME_GAZEBO_SENSORS__ACTION__DETAIL__MOVE_ACTION__STRUCT_H_
#define BME_GAZEBO_SENSORS__ACTION__DETAIL__MOVE_ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/MoveAction in the package bme_gazebo_sensors.
typedef struct bme_gazebo_sensors__action__MoveAction_Goal
{
  double target_coordinate;
} bme_gazebo_sensors__action__MoveAction_Goal;

// Struct for a sequence of bme_gazebo_sensors__action__MoveAction_Goal.
typedef struct bme_gazebo_sensors__action__MoveAction_Goal__Sequence
{
  bme_gazebo_sensors__action__MoveAction_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bme_gazebo_sensors__action__MoveAction_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/MoveAction in the package bme_gazebo_sensors.
typedef struct bme_gazebo_sensors__action__MoveAction_Result
{
  /// Result
  double final_coordinate;
} bme_gazebo_sensors__action__MoveAction_Result;

// Struct for a sequence of bme_gazebo_sensors__action__MoveAction_Result.
typedef struct bme_gazebo_sensors__action__MoveAction_Result__Sequence
{
  bme_gazebo_sensors__action__MoveAction_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bme_gazebo_sensors__action__MoveAction_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/MoveAction in the package bme_gazebo_sensors.
typedef struct bme_gazebo_sensors__action__MoveAction_Feedback
{
  /// Feedback
  double current_coordinate;
} bme_gazebo_sensors__action__MoveAction_Feedback;

// Struct for a sequence of bme_gazebo_sensors__action__MoveAction_Feedback.
typedef struct bme_gazebo_sensors__action__MoveAction_Feedback__Sequence
{
  bme_gazebo_sensors__action__MoveAction_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bme_gazebo_sensors__action__MoveAction_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "bme_gazebo_sensors/action/detail/move_action__struct.h"

/// Struct defined in action/MoveAction in the package bme_gazebo_sensors.
typedef struct bme_gazebo_sensors__action__MoveAction_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  bme_gazebo_sensors__action__MoveAction_Goal goal;
} bme_gazebo_sensors__action__MoveAction_SendGoal_Request;

// Struct for a sequence of bme_gazebo_sensors__action__MoveAction_SendGoal_Request.
typedef struct bme_gazebo_sensors__action__MoveAction_SendGoal_Request__Sequence
{
  bme_gazebo_sensors__action__MoveAction_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bme_gazebo_sensors__action__MoveAction_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MoveAction in the package bme_gazebo_sensors.
typedef struct bme_gazebo_sensors__action__MoveAction_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} bme_gazebo_sensors__action__MoveAction_SendGoal_Response;

// Struct for a sequence of bme_gazebo_sensors__action__MoveAction_SendGoal_Response.
typedef struct bme_gazebo_sensors__action__MoveAction_SendGoal_Response__Sequence
{
  bme_gazebo_sensors__action__MoveAction_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bme_gazebo_sensors__action__MoveAction_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MoveAction in the package bme_gazebo_sensors.
typedef struct bme_gazebo_sensors__action__MoveAction_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} bme_gazebo_sensors__action__MoveAction_GetResult_Request;

// Struct for a sequence of bme_gazebo_sensors__action__MoveAction_GetResult_Request.
typedef struct bme_gazebo_sensors__action__MoveAction_GetResult_Request__Sequence
{
  bme_gazebo_sensors__action__MoveAction_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bme_gazebo_sensors__action__MoveAction_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__struct.h"

/// Struct defined in action/MoveAction in the package bme_gazebo_sensors.
typedef struct bme_gazebo_sensors__action__MoveAction_GetResult_Response
{
  int8_t status;
  bme_gazebo_sensors__action__MoveAction_Result result;
} bme_gazebo_sensors__action__MoveAction_GetResult_Response;

// Struct for a sequence of bme_gazebo_sensors__action__MoveAction_GetResult_Response.
typedef struct bme_gazebo_sensors__action__MoveAction_GetResult_Response__Sequence
{
  bme_gazebo_sensors__action__MoveAction_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bme_gazebo_sensors__action__MoveAction_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__struct.h"

/// Struct defined in action/MoveAction in the package bme_gazebo_sensors.
typedef struct bme_gazebo_sensors__action__MoveAction_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  bme_gazebo_sensors__action__MoveAction_Feedback feedback;
} bme_gazebo_sensors__action__MoveAction_FeedbackMessage;

// Struct for a sequence of bme_gazebo_sensors__action__MoveAction_FeedbackMessage.
typedef struct bme_gazebo_sensors__action__MoveAction_FeedbackMessage__Sequence
{
  bme_gazebo_sensors__action__MoveAction_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bme_gazebo_sensors__action__MoveAction_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BME_GAZEBO_SENSORS__ACTION__DETAIL__MOVE_ACTION__STRUCT_H_
