from setuptools import setup

package_name = "state_publisher"

setup(
    name=package_name,
    version="0.0.0",
    packages=[package_name],
    data_files=[
        ("share/ament_index/resource_index/packages", ["resource/" + package_name]),
        ("share/" + package_name, ["package.xml"]),
    ],
    install_requires=["setuptools"],
    zip_safe=True,
    maintainer="akariros",
    maintainer_email="akariros@todo.todo",
    description="TODO: Package description",
    license="TODO: License declaration",
    tests_require=["pytest"],
    entry_points={
        "console_scripts": [
            "joint_state_publisher = state_publisher.joint_state_publisher:main",
            "m5stack_publisher = state_publisher.m5stack_publisher:main",
        ],
    },
)
