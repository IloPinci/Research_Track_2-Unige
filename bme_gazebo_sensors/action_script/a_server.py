#!/usr/bin/env python3

import os
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor

from nav_msgs.msg import Odometry
from geometry_msgs.msg import Twist
from bme_gazebo_sensors.action import MoveAction

import time

class move_robot_x_server(Node):

    def __init__(self):
        super().__init__('action_server')

        self._cb_group = ReentrantCallbackGroup()

        self._action_server = ActionServer(
            self,
            MoveAction,
            'move_to_x',
            execute_callback = self.execute_callback,
            goal_callback = self.goal_callback,
            cancel_callback = self.cancel_callback,
            callback_group = self._cb_group, 
        )

        self._odom_sub = self.create_subscription(
            Odometry,
            '/odom',
            self.odom_callback,
            10,
            callback_group=self._cb_group,
        )


        self._cmd_vel_pub = self.create_publisher(Twist, '/cmd_vel', 10)
        self.current_coordinate = 0.0

        self.get_logger().info('Action server is ready')



    def goal_callback(self, goal_request):
        self.get_logger().info(f'Received goal: target_coordinate = {goal_request.target_coordinate:.2f}')
        return GoalResponse.ACCEPT
    
    def cancel_callback(self, goal_handle):
        self.get_logger().info('Received cancel request.')
        return CancelResponse.ACCEPT
    
    def odom_callback(self, msg):
        self.current_coordinate = msg.pose.pose.position.x

    def execute_callback(self, goal_handle):
            self.get_logger().info(f'Executing goal: target_coordinate = {goal_handle.request.target_coordinate:.2f}')

            target_x = goal_handle.request.target_coordinate
            feedback_msg = MoveAction.Feedback()

            twist = Twist()
            twist.linear.x = 0.2  # m/s forward speed

            while self.current_coordinate < target_x:
                # Handle cancellation
                if goal_handle.is_cancel_requested:
                    self.get_logger().info('Goal cancelled.')
                    self._stop_robot()
                    goal_handle.canceled()
                    result = MoveAction.Result()
                    result.final_coordinate  = self.current_coordinate
                    return result

                # Publish velocity command
                self._cmd_vel_pub.publish(twist)

                # Publish feedback
                feedback_msg.current_coordinate = self.current_coordinate
                goal_handle.publish_feedback(feedback_msg)

                self.get_logger().info(
                    f'Current x: {self.current_coordinate:.2f} | '
                )

                time.sleep(0.1)

            # Goal reached
            self._stop_robot()
            goal_handle.succeed()

            result = MoveAction.Result()
            result.final_coordinate  = self.current_coordinate
            self.get_logger().info(f'Goal reached: {result.final_coordinate:.2f}')
            return result

    def _stop_robot(self):
        twist = Twist()
        self._cmd_vel_pub.publish(twist)



def main(args=None):
    rclpy.init(args=args)
    server = move_robot_x_server()

    executor = MultiThreadedExecutor()
    executor.add_node(server)

    try:
        executor.spin()
    finally:
        server.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()