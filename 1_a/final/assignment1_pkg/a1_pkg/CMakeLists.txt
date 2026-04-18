cmake_minimum_required(VERSION 3.8)
project(a1_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "action/MovePose.action"
  DEPENDENCIES geometry_msgs
)

add_library(pose_server_component SHARED src/pose_server_component.cpp)
target_include_directories(pose_server_component PRIVATE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)
target_compile_definitions(pose_server_component PRIVATE "COMPONENTS_PACKAGE_BUILDING_DLL")
ament_target_dependencies(pose_server_component rclcpp rclcpp_action rclcpp_components geometry_msgs tf2 tf2_ros)
rosidl_target_interfaces(pose_server_component ${PROJECT_NAME} "rosidl_typesupport_cpp")
rclcpp_components_register_node(pose_server_component PLUGIN "a1_pkg::PoseServerComponent" EXECUTABLE pose_server_node)

add_library(pose_client_component SHARED src/pose_client_component.cpp)
target_include_directories(pose_client_component PRIVATE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>)
target_compile_definitions(pose_client_component PRIVATE "COMPONENTS_PACKAGE_BUILDING_DLL")
ament_target_dependencies(pose_client_component rclcpp rclcpp_action rclcpp_components geometry_msgs)
rosidl_target_interfaces(pose_client_component ${PROJECT_NAME} "rosidl_typesupport_cpp")
rclcpp_components_register_node(pose_client_component PLUGIN "a1_pkg::PoseClientComponent" EXECUTABLE pose_client_node)

install(PROGRAMS
  scripts/ui_node.py
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY launch urdf meshes worlds rviz config
  DESTINATION share/${PROJECT_NAME}
)

install(TARGETS
  pose_server_component
  pose_client_component
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

ament_package()