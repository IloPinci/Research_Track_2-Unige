#!/usr/bin/env python3
import rclpy
from geometry_msgs.msg import Pose2D

def main(args=None):
    rclpy.init(args=args)
    node = rclpy.create_node('ui_node')
    pub = node.create_publisher(Pose2D, '/target_pose', 10)

    while rclpy.ok():
        try:
            x_str = input("Target X: ")
            y_str = input("Target Y: ")
            msg = Pose2D()
            msg.x = float(x_str)
            msg.y = float(y_str)
            pub.publish(msg)
        except ValueError:
            pass
        except (KeyboardInterrupt, EOFError):
            break

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()