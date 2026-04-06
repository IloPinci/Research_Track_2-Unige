#!/usr/bin/env python3

import sys
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient

from bme_gazebo_sensors.action import MoveAction


class move_robot_x_client(Node):

    def __init__(self):
        super().__init__('action_client')

        self._action_client = ActionClient(self, MoveAction, 'move_to_x')

    
    def send_goal(self, target_coordinate):
        self.get_logger().info(f'Waiting for action server...')
        self._action_client.wait_for_server()

        goal_msg = MoveAction.Goal()
        goal_msg.target_coordinate = target_coordinate

        self.get_logger().info(f'Sending goal: target_coordinate = {target_coordinate:.2f}')
        self._send_goal_future = self._action_client.send_goal_async(
            goal_msg,
            feedback_callback=self.feedback_callback,
        )

        self._send_goal_future.add_done_callback(self.goal_response_callback)

    
    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info(f'Feedback: {feedback.current_coordinate}')

    
    def goal_response_callback(self, future):
        goal_handle = future.result()

        if not goal_handle.accepted:
            self.get_logger().info('Goal Rejected')
            rclpy.shutdown()
            return
        
        self.get_logger().info('Goal Accepted]')
    
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        
        result = future.result().result
        self.get_logger().info(f'Result: {result.final_coordinate}')
        rclpy.shutdown()


def main(args=None):
    rclpy.init(args=args)

    # Read the target from command line, else default to 5.0
    target_coordinate = float(sys.argv[1]) if len(sys.argv) > 1 else 5.0

    client = move_robot_x_client()
    client.send_goal(target_coordinate)

    rclpy.spin(client)



if __name__ == '__main__':
    main()