# Akari_for_ros
Akari ROS 2 Humble version (still in progress)

https://github.com/AkariGroup/akari_software

***
## py_subpub
A simple publisher and subscriber (Python)

https://docs.ros.org/en/humble/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Py-Publisher-And-Subscriber.html

### Publisher  
```
ros2 run py_pubsub talker
```
### Subscriber
```
ros2 run py_pubsub listener
```

***
## py_akari_pubsub
Operate Akari using the keyboard.

### Publisher

```
ros2 run py_akari_pubsub akari_talker
```

```
*** Keyboard operation manual ***
  vertical movement {q, w}
  horizontal movement {a, s}
  reset servo positions {r}
  enable all servos {e}
  disable all servos {d}
```


### Subscriber
```
ros2 run py_akari_pubsub akari_listener
```

***
## py_srvcli
A simple service and client (Python)

https://docs.ros.org/en/humble/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Py-Service-And-Client.html

### service node  
```
ros2 run py_srvcli service
```
### client node
```
ros2 run py_srvcli client 2 3
```

***
## py_hello & py_tutorial_interfaces
custom msg and srv files
### server node  
```
ros2 run py_hello server
```
### client node
```
ros2 run py_hello client
```

***
## py_m5serial
Read GPIO sample & simple publisher
### check GPIO
```
python3 py_m5serial/src/button_gpio.py 
```
### Publish GPIO message. Topic /M5stack
(ros2 run py_m5serial M5publisher does NOT work)
```
python3 py_m5serial/src/button_gpio_publisher.py
```
### To check ros2 message
```
ros2 topic echo /M5stack
```
