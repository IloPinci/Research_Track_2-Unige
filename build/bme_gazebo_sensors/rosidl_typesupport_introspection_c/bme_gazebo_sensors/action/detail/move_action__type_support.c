// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bme_gazebo_sensors:action/MoveAction.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bme_gazebo_sensors/action/detail/move_action__rosidl_typesupport_introspection_c.h"
#include "bme_gazebo_sensors/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bme_gazebo_sensors/action/detail/move_action__functions.h"
#include "bme_gazebo_sensors/action/detail/move_action__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void bme_gazebo_sensors__action__MoveAction_Goal__rosidl_typesupport_introspection_c__MoveAction_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bme_gazebo_sensors__action__MoveAction_Goal__init(message_memory);
}

void bme_gazebo_sensors__action__MoveAction_Goal__rosidl_typesupport_introspection_c__MoveAction_Goal_fini_function(void * message_memory)
{
  bme_gazebo_sensors__action__MoveAction_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bme_gazebo_sensors__action__MoveAction_Goal__rosidl_typesupport_introspection_c__MoveAction_Goal_message_member_array[1] = {
  {
    "target_coordinate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bme_gazebo_sensors__action__MoveAction_Goal, target_coordinate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bme_gazebo_sensors__action__MoveAction_Goal__rosidl_typesupport_introspection_c__MoveAction_Goal_message_members = {
  "bme_gazebo_sensors__action",  // message namespace
  "MoveAction_Goal",  // message name
  1,  // number of fields
  sizeof(bme_gazebo_sensors__action__MoveAction_Goal),
  bme_gazebo_sensors__action__MoveAction_Goal__rosidl_typesupport_introspection_c__MoveAction_Goal_message_member_array,  // message members
  bme_gazebo_sensors__action__MoveAction_Goal__rosidl_typesupport_introspection_c__MoveAction_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  bme_gazebo_sensors__action__MoveAction_Goal__rosidl_typesupport_introspection_c__MoveAction_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bme_gazebo_sensors__action__MoveAction_Goal__rosidl_typesupport_introspection_c__MoveAction_Goal_message_type_support_handle = {
  0,
  &bme_gazebo_sensors__action__MoveAction_Goal__rosidl_typesupport_introspection_c__MoveAction_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bme_gazebo_sensors
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bme_gazebo_sensors, action, MoveAction_Goal)() {
  if (!bme_gazebo_sensors__action__MoveAction_Goal__rosidl_typesupport_introspection_c__MoveAction_Goal_message_type_support_handle.typesupport_identifier) {
    bme_gazebo_sensors__action__MoveAction_Goal__rosidl_typesupport_introspection_c__MoveAction_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bme_gazebo_sensors__action__MoveAction_Goal__rosidl_typesupport_introspection_c__MoveAction_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "bme_gazebo_sensors/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__functions.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void bme_gazebo_sensors__action__MoveAction_Result__rosidl_typesupport_introspection_c__MoveAction_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bme_gazebo_sensors__action__MoveAction_Result__init(message_memory);
}

void bme_gazebo_sensors__action__MoveAction_Result__rosidl_typesupport_introspection_c__MoveAction_Result_fini_function(void * message_memory)
{
  bme_gazebo_sensors__action__MoveAction_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bme_gazebo_sensors__action__MoveAction_Result__rosidl_typesupport_introspection_c__MoveAction_Result_message_member_array[1] = {
  {
    "final_coordinate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bme_gazebo_sensors__action__MoveAction_Result, final_coordinate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bme_gazebo_sensors__action__MoveAction_Result__rosidl_typesupport_introspection_c__MoveAction_Result_message_members = {
  "bme_gazebo_sensors__action",  // message namespace
  "MoveAction_Result",  // message name
  1,  // number of fields
  sizeof(bme_gazebo_sensors__action__MoveAction_Result),
  bme_gazebo_sensors__action__MoveAction_Result__rosidl_typesupport_introspection_c__MoveAction_Result_message_member_array,  // message members
  bme_gazebo_sensors__action__MoveAction_Result__rosidl_typesupport_introspection_c__MoveAction_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  bme_gazebo_sensors__action__MoveAction_Result__rosidl_typesupport_introspection_c__MoveAction_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bme_gazebo_sensors__action__MoveAction_Result__rosidl_typesupport_introspection_c__MoveAction_Result_message_type_support_handle = {
  0,
  &bme_gazebo_sensors__action__MoveAction_Result__rosidl_typesupport_introspection_c__MoveAction_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bme_gazebo_sensors
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bme_gazebo_sensors, action, MoveAction_Result)() {
  if (!bme_gazebo_sensors__action__MoveAction_Result__rosidl_typesupport_introspection_c__MoveAction_Result_message_type_support_handle.typesupport_identifier) {
    bme_gazebo_sensors__action__MoveAction_Result__rosidl_typesupport_introspection_c__MoveAction_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bme_gazebo_sensors__action__MoveAction_Result__rosidl_typesupport_introspection_c__MoveAction_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "bme_gazebo_sensors/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__functions.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void bme_gazebo_sensors__action__MoveAction_Feedback__rosidl_typesupport_introspection_c__MoveAction_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bme_gazebo_sensors__action__MoveAction_Feedback__init(message_memory);
}

void bme_gazebo_sensors__action__MoveAction_Feedback__rosidl_typesupport_introspection_c__MoveAction_Feedback_fini_function(void * message_memory)
{
  bme_gazebo_sensors__action__MoveAction_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bme_gazebo_sensors__action__MoveAction_Feedback__rosidl_typesupport_introspection_c__MoveAction_Feedback_message_member_array[1] = {
  {
    "current_coordinate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bme_gazebo_sensors__action__MoveAction_Feedback, current_coordinate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bme_gazebo_sensors__action__MoveAction_Feedback__rosidl_typesupport_introspection_c__MoveAction_Feedback_message_members = {
  "bme_gazebo_sensors__action",  // message namespace
  "MoveAction_Feedback",  // message name
  1,  // number of fields
  sizeof(bme_gazebo_sensors__action__MoveAction_Feedback),
  bme_gazebo_sensors__action__MoveAction_Feedback__rosidl_typesupport_introspection_c__MoveAction_Feedback_message_member_array,  // message members
  bme_gazebo_sensors__action__MoveAction_Feedback__rosidl_typesupport_introspection_c__MoveAction_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  bme_gazebo_sensors__action__MoveAction_Feedback__rosidl_typesupport_introspection_c__MoveAction_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bme_gazebo_sensors__action__MoveAction_Feedback__rosidl_typesupport_introspection_c__MoveAction_Feedback_message_type_support_handle = {
  0,
  &bme_gazebo_sensors__action__MoveAction_Feedback__rosidl_typesupport_introspection_c__MoveAction_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bme_gazebo_sensors
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bme_gazebo_sensors, action, MoveAction_Feedback)() {
  if (!bme_gazebo_sensors__action__MoveAction_Feedback__rosidl_typesupport_introspection_c__MoveAction_Feedback_message_type_support_handle.typesupport_identifier) {
    bme_gazebo_sensors__action__MoveAction_Feedback__rosidl_typesupport_introspection_c__MoveAction_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bme_gazebo_sensors__action__MoveAction_Feedback__rosidl_typesupport_introspection_c__MoveAction_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "bme_gazebo_sensors/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__functions.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "bme_gazebo_sensors/action/move_action.h"
// Member `goal`
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bme_gazebo_sensors__action__MoveAction_SendGoal_Request__rosidl_typesupport_introspection_c__MoveAction_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bme_gazebo_sensors__action__MoveAction_SendGoal_Request__init(message_memory);
}

void bme_gazebo_sensors__action__MoveAction_SendGoal_Request__rosidl_typesupport_introspection_c__MoveAction_SendGoal_Request_fini_function(void * message_memory)
{
  bme_gazebo_sensors__action__MoveAction_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bme_gazebo_sensors__action__MoveAction_SendGoal_Request__rosidl_typesupport_introspection_c__MoveAction_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bme_gazebo_sensors__action__MoveAction_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bme_gazebo_sensors__action__MoveAction_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bme_gazebo_sensors__action__MoveAction_SendGoal_Request__rosidl_typesupport_introspection_c__MoveAction_SendGoal_Request_message_members = {
  "bme_gazebo_sensors__action",  // message namespace
  "MoveAction_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(bme_gazebo_sensors__action__MoveAction_SendGoal_Request),
  bme_gazebo_sensors__action__MoveAction_SendGoal_Request__rosidl_typesupport_introspection_c__MoveAction_SendGoal_Request_message_member_array,  // message members
  bme_gazebo_sensors__action__MoveAction_SendGoal_Request__rosidl_typesupport_introspection_c__MoveAction_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  bme_gazebo_sensors__action__MoveAction_SendGoal_Request__rosidl_typesupport_introspection_c__MoveAction_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bme_gazebo_sensors__action__MoveAction_SendGoal_Request__rosidl_typesupport_introspection_c__MoveAction_SendGoal_Request_message_type_support_handle = {
  0,
  &bme_gazebo_sensors__action__MoveAction_SendGoal_Request__rosidl_typesupport_introspection_c__MoveAction_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bme_gazebo_sensors
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bme_gazebo_sensors, action, MoveAction_SendGoal_Request)() {
  bme_gazebo_sensors__action__MoveAction_SendGoal_Request__rosidl_typesupport_introspection_c__MoveAction_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  bme_gazebo_sensors__action__MoveAction_SendGoal_Request__rosidl_typesupport_introspection_c__MoveAction_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bme_gazebo_sensors, action, MoveAction_Goal)();
  if (!bme_gazebo_sensors__action__MoveAction_SendGoal_Request__rosidl_typesupport_introspection_c__MoveAction_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    bme_gazebo_sensors__action__MoveAction_SendGoal_Request__rosidl_typesupport_introspection_c__MoveAction_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bme_gazebo_sensors__action__MoveAction_SendGoal_Request__rosidl_typesupport_introspection_c__MoveAction_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "bme_gazebo_sensors/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__functions.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bme_gazebo_sensors__action__MoveAction_SendGoal_Response__rosidl_typesupport_introspection_c__MoveAction_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bme_gazebo_sensors__action__MoveAction_SendGoal_Response__init(message_memory);
}

void bme_gazebo_sensors__action__MoveAction_SendGoal_Response__rosidl_typesupport_introspection_c__MoveAction_SendGoal_Response_fini_function(void * message_memory)
{
  bme_gazebo_sensors__action__MoveAction_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bme_gazebo_sensors__action__MoveAction_SendGoal_Response__rosidl_typesupport_introspection_c__MoveAction_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bme_gazebo_sensors__action__MoveAction_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bme_gazebo_sensors__action__MoveAction_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bme_gazebo_sensors__action__MoveAction_SendGoal_Response__rosidl_typesupport_introspection_c__MoveAction_SendGoal_Response_message_members = {
  "bme_gazebo_sensors__action",  // message namespace
  "MoveAction_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(bme_gazebo_sensors__action__MoveAction_SendGoal_Response),
  bme_gazebo_sensors__action__MoveAction_SendGoal_Response__rosidl_typesupport_introspection_c__MoveAction_SendGoal_Response_message_member_array,  // message members
  bme_gazebo_sensors__action__MoveAction_SendGoal_Response__rosidl_typesupport_introspection_c__MoveAction_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  bme_gazebo_sensors__action__MoveAction_SendGoal_Response__rosidl_typesupport_introspection_c__MoveAction_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bme_gazebo_sensors__action__MoveAction_SendGoal_Response__rosidl_typesupport_introspection_c__MoveAction_SendGoal_Response_message_type_support_handle = {
  0,
  &bme_gazebo_sensors__action__MoveAction_SendGoal_Response__rosidl_typesupport_introspection_c__MoveAction_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bme_gazebo_sensors
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bme_gazebo_sensors, action, MoveAction_SendGoal_Response)() {
  bme_gazebo_sensors__action__MoveAction_SendGoal_Response__rosidl_typesupport_introspection_c__MoveAction_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!bme_gazebo_sensors__action__MoveAction_SendGoal_Response__rosidl_typesupport_introspection_c__MoveAction_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    bme_gazebo_sensors__action__MoveAction_SendGoal_Response__rosidl_typesupport_introspection_c__MoveAction_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bme_gazebo_sensors__action__MoveAction_SendGoal_Response__rosidl_typesupport_introspection_c__MoveAction_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "bme_gazebo_sensors/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers bme_gazebo_sensors__action__detail__move_action__rosidl_typesupport_introspection_c__MoveAction_SendGoal_service_members = {
  "bme_gazebo_sensors__action",  // service namespace
  "MoveAction_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // bme_gazebo_sensors__action__detail__move_action__rosidl_typesupport_introspection_c__MoveAction_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // bme_gazebo_sensors__action__detail__move_action__rosidl_typesupport_introspection_c__MoveAction_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t bme_gazebo_sensors__action__detail__move_action__rosidl_typesupport_introspection_c__MoveAction_SendGoal_service_type_support_handle = {
  0,
  &bme_gazebo_sensors__action__detail__move_action__rosidl_typesupport_introspection_c__MoveAction_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bme_gazebo_sensors, action, MoveAction_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bme_gazebo_sensors, action, MoveAction_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bme_gazebo_sensors
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bme_gazebo_sensors, action, MoveAction_SendGoal)() {
  if (!bme_gazebo_sensors__action__detail__move_action__rosidl_typesupport_introspection_c__MoveAction_SendGoal_service_type_support_handle.typesupport_identifier) {
    bme_gazebo_sensors__action__detail__move_action__rosidl_typesupport_introspection_c__MoveAction_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)bme_gazebo_sensors__action__detail__move_action__rosidl_typesupport_introspection_c__MoveAction_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bme_gazebo_sensors, action, MoveAction_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bme_gazebo_sensors, action, MoveAction_SendGoal_Response)()->data;
  }

  return &bme_gazebo_sensors__action__detail__move_action__rosidl_typesupport_introspection_c__MoveAction_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "bme_gazebo_sensors/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__functions.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bme_gazebo_sensors__action__MoveAction_GetResult_Request__rosidl_typesupport_introspection_c__MoveAction_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bme_gazebo_sensors__action__MoveAction_GetResult_Request__init(message_memory);
}

void bme_gazebo_sensors__action__MoveAction_GetResult_Request__rosidl_typesupport_introspection_c__MoveAction_GetResult_Request_fini_function(void * message_memory)
{
  bme_gazebo_sensors__action__MoveAction_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bme_gazebo_sensors__action__MoveAction_GetResult_Request__rosidl_typesupport_introspection_c__MoveAction_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bme_gazebo_sensors__action__MoveAction_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bme_gazebo_sensors__action__MoveAction_GetResult_Request__rosidl_typesupport_introspection_c__MoveAction_GetResult_Request_message_members = {
  "bme_gazebo_sensors__action",  // message namespace
  "MoveAction_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(bme_gazebo_sensors__action__MoveAction_GetResult_Request),
  bme_gazebo_sensors__action__MoveAction_GetResult_Request__rosidl_typesupport_introspection_c__MoveAction_GetResult_Request_message_member_array,  // message members
  bme_gazebo_sensors__action__MoveAction_GetResult_Request__rosidl_typesupport_introspection_c__MoveAction_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  bme_gazebo_sensors__action__MoveAction_GetResult_Request__rosidl_typesupport_introspection_c__MoveAction_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bme_gazebo_sensors__action__MoveAction_GetResult_Request__rosidl_typesupport_introspection_c__MoveAction_GetResult_Request_message_type_support_handle = {
  0,
  &bme_gazebo_sensors__action__MoveAction_GetResult_Request__rosidl_typesupport_introspection_c__MoveAction_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bme_gazebo_sensors
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bme_gazebo_sensors, action, MoveAction_GetResult_Request)() {
  bme_gazebo_sensors__action__MoveAction_GetResult_Request__rosidl_typesupport_introspection_c__MoveAction_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!bme_gazebo_sensors__action__MoveAction_GetResult_Request__rosidl_typesupport_introspection_c__MoveAction_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    bme_gazebo_sensors__action__MoveAction_GetResult_Request__rosidl_typesupport_introspection_c__MoveAction_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bme_gazebo_sensors__action__MoveAction_GetResult_Request__rosidl_typesupport_introspection_c__MoveAction_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "bme_gazebo_sensors/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__functions.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "bme_gazebo_sensors/action/move_action.h"
// Member `result`
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bme_gazebo_sensors__action__MoveAction_GetResult_Response__rosidl_typesupport_introspection_c__MoveAction_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bme_gazebo_sensors__action__MoveAction_GetResult_Response__init(message_memory);
}

void bme_gazebo_sensors__action__MoveAction_GetResult_Response__rosidl_typesupport_introspection_c__MoveAction_GetResult_Response_fini_function(void * message_memory)
{
  bme_gazebo_sensors__action__MoveAction_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bme_gazebo_sensors__action__MoveAction_GetResult_Response__rosidl_typesupport_introspection_c__MoveAction_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bme_gazebo_sensors__action__MoveAction_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bme_gazebo_sensors__action__MoveAction_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bme_gazebo_sensors__action__MoveAction_GetResult_Response__rosidl_typesupport_introspection_c__MoveAction_GetResult_Response_message_members = {
  "bme_gazebo_sensors__action",  // message namespace
  "MoveAction_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(bme_gazebo_sensors__action__MoveAction_GetResult_Response),
  bme_gazebo_sensors__action__MoveAction_GetResult_Response__rosidl_typesupport_introspection_c__MoveAction_GetResult_Response_message_member_array,  // message members
  bme_gazebo_sensors__action__MoveAction_GetResult_Response__rosidl_typesupport_introspection_c__MoveAction_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  bme_gazebo_sensors__action__MoveAction_GetResult_Response__rosidl_typesupport_introspection_c__MoveAction_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bme_gazebo_sensors__action__MoveAction_GetResult_Response__rosidl_typesupport_introspection_c__MoveAction_GetResult_Response_message_type_support_handle = {
  0,
  &bme_gazebo_sensors__action__MoveAction_GetResult_Response__rosidl_typesupport_introspection_c__MoveAction_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bme_gazebo_sensors
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bme_gazebo_sensors, action, MoveAction_GetResult_Response)() {
  bme_gazebo_sensors__action__MoveAction_GetResult_Response__rosidl_typesupport_introspection_c__MoveAction_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bme_gazebo_sensors, action, MoveAction_Result)();
  if (!bme_gazebo_sensors__action__MoveAction_GetResult_Response__rosidl_typesupport_introspection_c__MoveAction_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    bme_gazebo_sensors__action__MoveAction_GetResult_Response__rosidl_typesupport_introspection_c__MoveAction_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bme_gazebo_sensors__action__MoveAction_GetResult_Response__rosidl_typesupport_introspection_c__MoveAction_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "bme_gazebo_sensors/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers bme_gazebo_sensors__action__detail__move_action__rosidl_typesupport_introspection_c__MoveAction_GetResult_service_members = {
  "bme_gazebo_sensors__action",  // service namespace
  "MoveAction_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // bme_gazebo_sensors__action__detail__move_action__rosidl_typesupport_introspection_c__MoveAction_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // bme_gazebo_sensors__action__detail__move_action__rosidl_typesupport_introspection_c__MoveAction_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t bme_gazebo_sensors__action__detail__move_action__rosidl_typesupport_introspection_c__MoveAction_GetResult_service_type_support_handle = {
  0,
  &bme_gazebo_sensors__action__detail__move_action__rosidl_typesupport_introspection_c__MoveAction_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bme_gazebo_sensors, action, MoveAction_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bme_gazebo_sensors, action, MoveAction_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bme_gazebo_sensors
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bme_gazebo_sensors, action, MoveAction_GetResult)() {
  if (!bme_gazebo_sensors__action__detail__move_action__rosidl_typesupport_introspection_c__MoveAction_GetResult_service_type_support_handle.typesupport_identifier) {
    bme_gazebo_sensors__action__detail__move_action__rosidl_typesupport_introspection_c__MoveAction_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)bme_gazebo_sensors__action__detail__move_action__rosidl_typesupport_introspection_c__MoveAction_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bme_gazebo_sensors, action, MoveAction_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bme_gazebo_sensors, action, MoveAction_GetResult_Response)()->data;
  }

  return &bme_gazebo_sensors__action__detail__move_action__rosidl_typesupport_introspection_c__MoveAction_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__rosidl_typesupport_introspection_c.h"
// already included above
// #include "bme_gazebo_sensors/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__functions.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "bme_gazebo_sensors/action/move_action.h"
// Member `feedback`
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bme_gazebo_sensors__action__MoveAction_FeedbackMessage__rosidl_typesupport_introspection_c__MoveAction_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bme_gazebo_sensors__action__MoveAction_FeedbackMessage__init(message_memory);
}

void bme_gazebo_sensors__action__MoveAction_FeedbackMessage__rosidl_typesupport_introspection_c__MoveAction_FeedbackMessage_fini_function(void * message_memory)
{
  bme_gazebo_sensors__action__MoveAction_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bme_gazebo_sensors__action__MoveAction_FeedbackMessage__rosidl_typesupport_introspection_c__MoveAction_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bme_gazebo_sensors__action__MoveAction_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bme_gazebo_sensors__action__MoveAction_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bme_gazebo_sensors__action__MoveAction_FeedbackMessage__rosidl_typesupport_introspection_c__MoveAction_FeedbackMessage_message_members = {
  "bme_gazebo_sensors__action",  // message namespace
  "MoveAction_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(bme_gazebo_sensors__action__MoveAction_FeedbackMessage),
  bme_gazebo_sensors__action__MoveAction_FeedbackMessage__rosidl_typesupport_introspection_c__MoveAction_FeedbackMessage_message_member_array,  // message members
  bme_gazebo_sensors__action__MoveAction_FeedbackMessage__rosidl_typesupport_introspection_c__MoveAction_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  bme_gazebo_sensors__action__MoveAction_FeedbackMessage__rosidl_typesupport_introspection_c__MoveAction_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bme_gazebo_sensors__action__MoveAction_FeedbackMessage__rosidl_typesupport_introspection_c__MoveAction_FeedbackMessage_message_type_support_handle = {
  0,
  &bme_gazebo_sensors__action__MoveAction_FeedbackMessage__rosidl_typesupport_introspection_c__MoveAction_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bme_gazebo_sensors
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bme_gazebo_sensors, action, MoveAction_FeedbackMessage)() {
  bme_gazebo_sensors__action__MoveAction_FeedbackMessage__rosidl_typesupport_introspection_c__MoveAction_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  bme_gazebo_sensors__action__MoveAction_FeedbackMessage__rosidl_typesupport_introspection_c__MoveAction_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bme_gazebo_sensors, action, MoveAction_Feedback)();
  if (!bme_gazebo_sensors__action__MoveAction_FeedbackMessage__rosidl_typesupport_introspection_c__MoveAction_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    bme_gazebo_sensors__action__MoveAction_FeedbackMessage__rosidl_typesupport_introspection_c__MoveAction_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bme_gazebo_sensors__action__MoveAction_FeedbackMessage__rosidl_typesupport_introspection_c__MoveAction_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
