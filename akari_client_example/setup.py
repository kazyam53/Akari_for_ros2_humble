import os
from glob import glob
from setuptools import setup

package_name = 'akari_client_example'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    package_data={
        '': [
            'akari_msgs',
        ]
    },
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*launch.[pxy][yma]*')))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='akariros',
    maintainer_email='akariros@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'm5publisher = akari_client_example.m5stack_publisher:main',
            'display_color = akari_client_example.display_color:main',
            'display_text = akari_client_example.display_text:main',
            'display_image = akari_client_example.display_image:main',
            'display_reset = akari_client_example.display_reset:main',
            'move_joints_action_client = akari_client_example.move_joints_action_client:main',
            'set_allout = akari_client_example.set_allout:main',
            'set_dout = akari_client_example.set_dout:main',
            'set_pwmout = akari_client_example.set_pwmout:main',
            'reset_allout = akari_client_example.reset_allout:main',
            'servo_acc_set_client = akari_client_example.servo_acc_set_client:main',
            'servo_vel_set_client = akari_client_example.servo_vel_set_client:main',
            'servo_enable_set_client = akari_client_example.servo_enable_set_client:main',
        ],
    },
)
