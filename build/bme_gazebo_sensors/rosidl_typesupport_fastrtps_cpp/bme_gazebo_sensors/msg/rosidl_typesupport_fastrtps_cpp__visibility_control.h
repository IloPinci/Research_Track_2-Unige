// generated from
// rosidl_typesupport_fastrtps_cpp/resource/rosidl_typesupport_fastrtps_cpp__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef BME_GAZEBO_SENSORS__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP__VISIBILITY_CONTROL_H_
#define BME_GAZEBO_SENSORS__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP__VISIBILITY_CONTROL_H_

#if __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_bme_gazebo_sensors __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_bme_gazebo_sensors __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_bme_gazebo_sensors __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_bme_gazebo_sensors __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_FASTRTPS_CPP_BUILDING_DLL_bme_gazebo_sensors
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bme_gazebo_sensors ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_bme_gazebo_sensors
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bme_gazebo_sensors ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_bme_gazebo_sensors
  #endif
#else
  #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_bme_gazebo_sensors __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_bme_gazebo_sensors
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bme_gazebo_sensors __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bme_gazebo_sensors
  #endif
#endif

#if __cplusplus
}
#endif

#endif  // BME_GAZEBO_SENSORS__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP__VISIBILITY_CONTROL_H_
