from launch import LaunchDescription
from launch_ros.actions import ComposableNodeContainer
from launch_ros.descriptions import ComposableNode

def generate_launch_description():
    container = ComposableNodeContainer(
        name='action_server_container',
        namespace='',
        package='rclcpp_components',
        executable='component_container_mt',
        composable_node_descriptions=[
            ComposableNode(
                package='components_package',
                plugin='components_package::MoveRobotXServer',
                name='action_server',
            ),
        ],
        output='screen',
    )

    return LaunchDescription([container])