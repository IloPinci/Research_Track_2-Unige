from launch import LaunchDescription
from launch_ros.actions import ComposableNodeContainer
from launch_ros.descriptions import ComposableNode

def generate_launch_description():
    container = ComposableNodeContainer(
        name='pose_component_container',
        namespace='',
        package='rclcpp_components',
        executable='component_container_mt',
        composable_node_descriptions=[
            ComposableNode(
                package='a1_pkg',
                plugin='a1_pkg::PoseServerComponent',
                name='pose_server',
                parameters=[{'use_sim_time': True}]
            ),
            ComposableNode(
                package='a1_pkg',
                plugin='a1_pkg::PoseClientComponent',
                name='pose_client',
                parameters=[{'use_sim_time': True}]
            )
        ],
        output='screen',
    )

    return LaunchDescription([container])