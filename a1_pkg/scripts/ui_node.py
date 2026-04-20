#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Pose2D
from std_msgs.msg import Bool

class UINode(Node):
    def __init__(self):
        super().__init__('ui_node')
        self.pose_pub = self.create_publisher(Pose2D, '/target_pose', 10)
        self.cancel_pub = self.create_publisher(Bool, '/cancel_goal', 10)

    def run(self):
        print("Robot UI - Commands:")
        print("  Enter X Y  -> send goal  (e.g. '5.0 3.0')")
        print("  'c'        -> cancel current goal")
        print("  'q'        -> quit")

        while rclpy.ok():
            try:
                user_input = input("\n> ").strip()
            except (KeyboardInterrupt, EOFError):
                break

            if not user_input:
                continue

            if user_input.lower() == 'q':
                print("Quitting.")
                break

            if user_input.lower() == 'c':
                msg = Bool()
                msg.data = True
                self.cancel_pub.publish(msg)
                print("Cancel request sent.")
                continue

            parts = user_input.split()
            if len(parts) == 2:
                try:
                    x = float(parts[0])
                    y = float(parts[1])
                    msg = Pose2D()
                    msg.x = x
                    msg.y = y
                    self.pose_pub.publish(msg)
                    print(f"Goal sent: x={x}, y={y}")
                except ValueError:
                    print("Invalid input. Enter two numbers, 'c', or 'q'.")
            else:
                print("Invalid input. Enter two numbers, 'c', or 'q'.")


def main(args=None):
    rclpy.init(args=args)
    node = UINode()
    node.run()
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()