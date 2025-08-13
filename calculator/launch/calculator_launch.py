from launch import LaunchDescription

from launch.actions import DeclareLaunchArgument

from launch.substitutions import PathJoinSubstitution, LaunchConfiguration

from launch.actions import RegisterEventHandler, EmitEvent

from launch_ros.actions import LifecycleNode
from launch_ros.substitutions import FindPackageShare

from launch.events import matches_action
from launch.event_handlers.on_process_start import OnProcessStart
from launch_ros.event_handlers import OnStateTransition
from launch_ros.events.lifecycle import ChangeState

import lifecycle_msgs.msg

def generate_launch_description():
#Declare arguments
    declared_arguments = []

    declared_arguments.append(
        DeclareLaunchArgument(
            'constants_file',
            default_value=PathJoinSubstitution([FindPackageShare('calculator'),
                                                'params', 'constants.yaml']),
            description='Full path to the file with the all parameters.'
        )
    )

#Initialize arguments
    constants_file = LaunchConfiguration('constants_file')

    calculator_lifecycle_node = LifecycleNode(
        package='calculator',
        executable='calculator_node',
        name='calculator_node',
        namespace='',
        output='screen',
        parameters=[constants_file],
        remappings=[
        ]
    )

    event_handlers = []

    event_handlers.append(
#Right after the node starts, make it take the 'configure' transition.
        RegisterEventHandler(
            OnProcessStart(
                target_action=calculator_lifecycle_node,
                on_start=[
                    EmitEvent(event=ChangeState(
                        lifecycle_node_matcher=matches_action(calculator_lifecycle_node),
                        transition_id=lifecycle_msgs.msg.Transition.TRANSITION_CONFIGURE,
                    )),
                ],
            )
        ),
    )

    event_handlers.append(
        RegisterEventHandler(
            OnStateTransition(
                target_lifecycle_node=calculator_lifecycle_node,
                start_state='configuring',
                goal_state='inactive',
                entities=[
                    EmitEvent(event=ChangeState(
                        lifecycle_node_matcher=matches_action(calculator_lifecycle_node),
                        transition_id=lifecycle_msgs.msg.Transition.TRANSITION_ACTIVATE,
                    )),
                ],
            )
        ),
    )

    ld = LaunchDescription()

#Declare the arguments
    for argument in declared_arguments:
        ld.add_action(argument)

#Add client node
    ld.add_action(calculator_lifecycle_node)

#Add event handlers
    for event_handler in event_handlers:
        ld.add_action(event_handler)

    return ld
