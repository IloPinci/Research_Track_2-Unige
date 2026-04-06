// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from bme_gazebo_sensors:action/MoveAction.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "bme_gazebo_sensors/action/detail/move_action__struct.h"
#include "bme_gazebo_sensors/action/detail/move_action__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace bme_gazebo_sensors
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveAction_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveAction_Goal_type_support_ids_t;

static const _MoveAction_Goal_type_support_ids_t _MoveAction_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveAction_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveAction_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveAction_Goal_type_support_symbol_names_t _MoveAction_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bme_gazebo_sensors, action, MoveAction_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bme_gazebo_sensors, action, MoveAction_Goal)),
  }
};

typedef struct _MoveAction_Goal_type_support_data_t
{
  void * data[2];
} _MoveAction_Goal_type_support_data_t;

static _MoveAction_Goal_type_support_data_t _MoveAction_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveAction_Goal_message_typesupport_map = {
  2,
  "bme_gazebo_sensors",
  &_MoveAction_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_MoveAction_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_MoveAction_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveAction_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveAction_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace bme_gazebo_sensors

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, bme_gazebo_sensors, action, MoveAction_Goal)() {
  return &::bme_gazebo_sensors::action::rosidl_typesupport_c::MoveAction_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__struct.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bme_gazebo_sensors
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveAction_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveAction_Result_type_support_ids_t;

static const _MoveAction_Result_type_support_ids_t _MoveAction_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveAction_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveAction_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveAction_Result_type_support_symbol_names_t _MoveAction_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bme_gazebo_sensors, action, MoveAction_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bme_gazebo_sensors, action, MoveAction_Result)),
  }
};

typedef struct _MoveAction_Result_type_support_data_t
{
  void * data[2];
} _MoveAction_Result_type_support_data_t;

static _MoveAction_Result_type_support_data_t _MoveAction_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveAction_Result_message_typesupport_map = {
  2,
  "bme_gazebo_sensors",
  &_MoveAction_Result_message_typesupport_ids.typesupport_identifier[0],
  &_MoveAction_Result_message_typesupport_symbol_names.symbol_name[0],
  &_MoveAction_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveAction_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveAction_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace bme_gazebo_sensors

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, bme_gazebo_sensors, action, MoveAction_Result)() {
  return &::bme_gazebo_sensors::action::rosidl_typesupport_c::MoveAction_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__struct.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bme_gazebo_sensors
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveAction_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveAction_Feedback_type_support_ids_t;

static const _MoveAction_Feedback_type_support_ids_t _MoveAction_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveAction_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveAction_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveAction_Feedback_type_support_symbol_names_t _MoveAction_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bme_gazebo_sensors, action, MoveAction_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bme_gazebo_sensors, action, MoveAction_Feedback)),
  }
};

typedef struct _MoveAction_Feedback_type_support_data_t
{
  void * data[2];
} _MoveAction_Feedback_type_support_data_t;

static _MoveAction_Feedback_type_support_data_t _MoveAction_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveAction_Feedback_message_typesupport_map = {
  2,
  "bme_gazebo_sensors",
  &_MoveAction_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_MoveAction_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_MoveAction_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveAction_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveAction_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace bme_gazebo_sensors

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, bme_gazebo_sensors, action, MoveAction_Feedback)() {
  return &::bme_gazebo_sensors::action::rosidl_typesupport_c::MoveAction_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__struct.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bme_gazebo_sensors
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveAction_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveAction_SendGoal_Request_type_support_ids_t;

static const _MoveAction_SendGoal_Request_type_support_ids_t _MoveAction_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveAction_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveAction_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveAction_SendGoal_Request_type_support_symbol_names_t _MoveAction_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bme_gazebo_sensors, action, MoveAction_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bme_gazebo_sensors, action, MoveAction_SendGoal_Request)),
  }
};

typedef struct _MoveAction_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _MoveAction_SendGoal_Request_type_support_data_t;

static _MoveAction_SendGoal_Request_type_support_data_t _MoveAction_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveAction_SendGoal_Request_message_typesupport_map = {
  2,
  "bme_gazebo_sensors",
  &_MoveAction_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveAction_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveAction_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveAction_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveAction_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace bme_gazebo_sensors

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, bme_gazebo_sensors, action, MoveAction_SendGoal_Request)() {
  return &::bme_gazebo_sensors::action::rosidl_typesupport_c::MoveAction_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__struct.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bme_gazebo_sensors
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveAction_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveAction_SendGoal_Response_type_support_ids_t;

static const _MoveAction_SendGoal_Response_type_support_ids_t _MoveAction_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveAction_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveAction_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveAction_SendGoal_Response_type_support_symbol_names_t _MoveAction_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bme_gazebo_sensors, action, MoveAction_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bme_gazebo_sensors, action, MoveAction_SendGoal_Response)),
  }
};

typedef struct _MoveAction_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _MoveAction_SendGoal_Response_type_support_data_t;

static _MoveAction_SendGoal_Response_type_support_data_t _MoveAction_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveAction_SendGoal_Response_message_typesupport_map = {
  2,
  "bme_gazebo_sensors",
  &_MoveAction_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveAction_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveAction_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveAction_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveAction_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace bme_gazebo_sensors

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, bme_gazebo_sensors, action, MoveAction_SendGoal_Response)() {
  return &::bme_gazebo_sensors::action::rosidl_typesupport_c::MoveAction_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bme_gazebo_sensors
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveAction_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveAction_SendGoal_type_support_ids_t;

static const _MoveAction_SendGoal_type_support_ids_t _MoveAction_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveAction_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveAction_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveAction_SendGoal_type_support_symbol_names_t _MoveAction_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bme_gazebo_sensors, action, MoveAction_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bme_gazebo_sensors, action, MoveAction_SendGoal)),
  }
};

typedef struct _MoveAction_SendGoal_type_support_data_t
{
  void * data[2];
} _MoveAction_SendGoal_type_support_data_t;

static _MoveAction_SendGoal_type_support_data_t _MoveAction_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveAction_SendGoal_service_typesupport_map = {
  2,
  "bme_gazebo_sensors",
  &_MoveAction_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_MoveAction_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_MoveAction_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveAction_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveAction_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace bme_gazebo_sensors

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, bme_gazebo_sensors, action, MoveAction_SendGoal)() {
  return &::bme_gazebo_sensors::action::rosidl_typesupport_c::MoveAction_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__struct.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bme_gazebo_sensors
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveAction_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveAction_GetResult_Request_type_support_ids_t;

static const _MoveAction_GetResult_Request_type_support_ids_t _MoveAction_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveAction_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveAction_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveAction_GetResult_Request_type_support_symbol_names_t _MoveAction_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bme_gazebo_sensors, action, MoveAction_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bme_gazebo_sensors, action, MoveAction_GetResult_Request)),
  }
};

typedef struct _MoveAction_GetResult_Request_type_support_data_t
{
  void * data[2];
} _MoveAction_GetResult_Request_type_support_data_t;

static _MoveAction_GetResult_Request_type_support_data_t _MoveAction_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveAction_GetResult_Request_message_typesupport_map = {
  2,
  "bme_gazebo_sensors",
  &_MoveAction_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveAction_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveAction_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveAction_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveAction_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace bme_gazebo_sensors

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, bme_gazebo_sensors, action, MoveAction_GetResult_Request)() {
  return &::bme_gazebo_sensors::action::rosidl_typesupport_c::MoveAction_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__struct.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bme_gazebo_sensors
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveAction_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveAction_GetResult_Response_type_support_ids_t;

static const _MoveAction_GetResult_Response_type_support_ids_t _MoveAction_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveAction_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveAction_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveAction_GetResult_Response_type_support_symbol_names_t _MoveAction_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bme_gazebo_sensors, action, MoveAction_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bme_gazebo_sensors, action, MoveAction_GetResult_Response)),
  }
};

typedef struct _MoveAction_GetResult_Response_type_support_data_t
{
  void * data[2];
} _MoveAction_GetResult_Response_type_support_data_t;

static _MoveAction_GetResult_Response_type_support_data_t _MoveAction_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveAction_GetResult_Response_message_typesupport_map = {
  2,
  "bme_gazebo_sensors",
  &_MoveAction_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveAction_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveAction_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveAction_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveAction_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace bme_gazebo_sensors

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, bme_gazebo_sensors, action, MoveAction_GetResult_Response)() {
  return &::bme_gazebo_sensors::action::rosidl_typesupport_c::MoveAction_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bme_gazebo_sensors
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveAction_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveAction_GetResult_type_support_ids_t;

static const _MoveAction_GetResult_type_support_ids_t _MoveAction_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveAction_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveAction_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveAction_GetResult_type_support_symbol_names_t _MoveAction_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bme_gazebo_sensors, action, MoveAction_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bme_gazebo_sensors, action, MoveAction_GetResult)),
  }
};

typedef struct _MoveAction_GetResult_type_support_data_t
{
  void * data[2];
} _MoveAction_GetResult_type_support_data_t;

static _MoveAction_GetResult_type_support_data_t _MoveAction_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveAction_GetResult_service_typesupport_map = {
  2,
  "bme_gazebo_sensors",
  &_MoveAction_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_MoveAction_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_MoveAction_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveAction_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveAction_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace bme_gazebo_sensors

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, bme_gazebo_sensors, action, MoveAction_GetResult)() {
  return &::bme_gazebo_sensors::action::rosidl_typesupport_c::MoveAction_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__struct.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bme_gazebo_sensors
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveAction_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveAction_FeedbackMessage_type_support_ids_t;

static const _MoveAction_FeedbackMessage_type_support_ids_t _MoveAction_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MoveAction_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveAction_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveAction_FeedbackMessage_type_support_symbol_names_t _MoveAction_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bme_gazebo_sensors, action, MoveAction_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bme_gazebo_sensors, action, MoveAction_FeedbackMessage)),
  }
};

typedef struct _MoveAction_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _MoveAction_FeedbackMessage_type_support_data_t;

static _MoveAction_FeedbackMessage_type_support_data_t _MoveAction_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveAction_FeedbackMessage_message_typesupport_map = {
  2,
  "bme_gazebo_sensors",
  &_MoveAction_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_MoveAction_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_MoveAction_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveAction_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveAction_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace bme_gazebo_sensors

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, bme_gazebo_sensors, action, MoveAction_FeedbackMessage)() {
  return &::bme_gazebo_sensors::action::rosidl_typesupport_c::MoveAction_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "bme_gazebo_sensors/action/move_action.h"
// already included above
// #include "bme_gazebo_sensors/action/detail/move_action__type_support.h"

static rosidl_action_type_support_t _bme_gazebo_sensors__action__MoveAction__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, bme_gazebo_sensors, action, MoveAction)()
{
  // Thread-safe by always writing the same values to the static struct
  _bme_gazebo_sensors__action__MoveAction__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, bme_gazebo_sensors, action, MoveAction_SendGoal)();
  _bme_gazebo_sensors__action__MoveAction__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, bme_gazebo_sensors, action, MoveAction_GetResult)();
  _bme_gazebo_sensors__action__MoveAction__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _bme_gazebo_sensors__action__MoveAction__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, bme_gazebo_sensors, action, MoveAction_FeedbackMessage)();
  _bme_gazebo_sensors__action__MoveAction__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_bme_gazebo_sensors__action__MoveAction__typesupport_c;
}

#ifdef __cplusplus
}
#endif
