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
                package='a1_pkg',
                plugin='a1_pkg::PoseServerComponent',
                name='action_server',
            ),
        ],
        output='screen',
    )

    return LaunchDescription([container])