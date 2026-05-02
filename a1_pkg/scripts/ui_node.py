#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Pose2D
from std_msgs.msg import Bool

# ANSI color codes used for terminal output formatting
class C:
    RESET  = '\033[0m'
    BOLD   = '\033[1m'
    DIM    = '\033[2m'
    RED    = '\033[91m'
    GREEN  = '\033[92m'
    YELLOW = '\033[93m'
    BLUE   = '\033[94m'
    CYAN   = '\033[96m'
    WHITE  = '\033[97m'
    GRAY   = '\033[90m'

# Application banner displayed at startup
BANNER = f"""
{C.CYAN}{C.BOLD}
  ROBOT NAVIGATOR
{C.RESET}"""

# Help menu describing available commands
HELP = f"""
{C.BOLD}Commands:{C.RESET}
  {C.GREEN}X Y θ{C.RESET}   send pose goal  {C.GRAY}(e.g. 5.0 3.0 1.57){C.RESET}
  {C.YELLOW}c{C.RESET}       cancel current goal
  {C.CYAN}h{C.RESET}       show this help
  {C.RED}q{C.RESET}       quit
{C.DIM}-----------------------------------------{C.RESET}"""


class UINode(Node):
    def __init__(self):
        super().__init__('ui_node')
        # Publisher for pose goals
        self.pose_pub   = self.create_publisher(Pose2D, '/target_pose',  10)
        # Publisher for cancel requests
        self.cancel_pub = self.create_publisher(Bool,   '/cancel_goal',  10)
        # Stores last sent goal for display purposes
        self._last_goal = None

    def _prompt(self):
        # Build prompt showing current system state
        status = (f'{C.GRAY}idle{C.RESET}'
                  if self._last_goal is None
                  else f'{C.GREEN}goal -> '
                       f'({self._last_goal[0]:.2f}, '
                       f'{self._last_goal[1]:.2f}, '
                       f'theta={self._last_goal[2]:.2f}){C.RESET}')
        return f'{C.BOLD}{C.BLUE}nav{C.RESET} {C.DIM}[{C.RESET}{status}{C.DIM}]{C.RESET} > '

    def run(self):
        # Main interactive loop
        print(BANNER)
        print(HELP)

        while rclpy.ok():
            try:
                raw = input(self._prompt()).strip()
            except (KeyboardInterrupt, EOFError):
                self._goodbye()
                break

            if not raw:
                continue

            cmd = raw.lower()

            if cmd == 'q':
                self._goodbye()
                break

            elif cmd in ('h', 'help'):
                print(HELP)

            elif cmd == 'c':
                msg = Bool()
                msg.data = True
                self.cancel_pub.publish(msg)
                self._last_goal = None
                print(f'  {C.YELLOW}Cancel request sent.{C.RESET}')

            else:
                self._handle_goal(raw)

    def _handle_goal(self, raw: str):
        # Parse and validate goal input
        parts = raw.split()
        if len(parts) != 3:
            print(f'  {C.RED}Expected: X Y theta  '
                  f'{C.GRAY}(e.g. "5.0 3.0 1.57"){C.RESET}')
            return
        try:
            x, y, theta = float(parts[0]), float(parts[1]), float(parts[2])
        except ValueError:
            print(f'  {C.RED}All three values must be numbers.{C.RESET}')
            return

        # Publish goal to ROS2 topic
        msg = Pose2D()
        msg.x, msg.y, msg.theta = x, y, theta
        self.pose_pub.publish(msg)
        self._last_goal = (x, y, theta)

        print(f'  {C.GREEN}Goal sent:{C.RESET}  '
              f'x={C.BOLD}{x:.3f}{C.RESET}  '
              f'y={C.BOLD}{y:.3f}{C.RESET}  '
              f'theta={C.BOLD}{theta:.3f}{C.RESET}')

    def _goodbye(self):
        # Cleanup message on exit
        print(f'\n{C.DIM}Shutting down navigator.{C.RESET}\n')


def main(args=None):
    rclpy.init(args=args)
    node = UINode()
    node.run()
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()