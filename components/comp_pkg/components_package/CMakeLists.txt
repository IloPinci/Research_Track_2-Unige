cmake_minimum_required(VERSION 3.8)
project(components_package)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Core Ament and ROS 2 dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# Interface Generation
rosidl_generate_interfaces(${PROJECT_NAME}
  "action/MoveAction.action"
)

# Server Component
add_library(a_server_component SHARED src/a_server_component.cpp)
target_include_directories(a_server_component PRIVATE include)
ament_target_dependencies(a_server_component 
  rclcpp rclcpp_action rclcpp_components nav_msgs geometry_msgs)
rosidl_target_interfaces(a_server_component ${PROJECT_NAME} "rosidl_typesupport_cpp")

rclcpp_components_register_node(a_server_component 
  PLUGIN "components_package::MoveRobotXServer" 
  EXECUTABLE action_server_node
)

# Client Component
add_library(a_client_component SHARED src/a_client_component.cpp)
target_include_directories(a_client_component PRIVATE include)
ament_target_dependencies(a_client_component 
  rclcpp rclcpp_action rclcpp_components)
rosidl_target_interfaces(a_client_component ${PROJECT_NAME} "rosidl_typesupport_cpp")

rclcpp_components_register_node(a_client_component 
  PLUGIN "components_package::MoveRobotXClient" 
  EXECUTABLE action_client_node
)

# Installation Directives
install(TARGETS a_server_component a_client_component
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

install(DIRECTORY
  launch
  worlds
  urdf
  meshes
  config
  rviz
  DESTINATION share/${PROJECT_NAME}
)

ament_package()