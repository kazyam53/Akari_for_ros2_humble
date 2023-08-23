// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from akari_msgs:srv/SetServoStatus.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__SRV__DETAIL__SET_SERVO_STATUS__STRUCT_H_
#define AKARI_MSGS__SRV__DETAIL__SET_SERVO_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_name'
// Member 'joint_name_array'
#include "rosidl_runtime_c/string.h"
// Member 'joint_vel_array'
// Member 'joint_acc_array'
// Member 'servo_enable_array'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SetServoStatus in the package akari_msgs.
typedef struct akari_msgs__srv__SetServoStatus_Request
{
  rosidl_runtime_c__String joint_name;
  rosidl_runtime_c__String__Sequence joint_name_array;
  float joint_vel_val;
  rosidl_runtime_c__float__Sequence joint_vel_array;
  float joint_acc_val;
  rosidl_runtime_c__float__Sequence joint_acc_array;
  bool servo_enable;
  rosidl_runtime_c__boolean__Sequence servo_enable_array;
} akari_msgs__srv__SetServoStatus_Request;

// Struct for a sequence of akari_msgs__srv__SetServoStatus_Request.
typedef struct akari_msgs__srv__SetServoStatus_Request__Sequence
{
  akari_msgs__srv__SetServoStatus_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} akari_msgs__srv__SetServoStatus_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetServoStatus in the package akari_msgs.
typedef struct akari_msgs__srv__SetServoStatus_Response
{
  bool result;
} akari_msgs__srv__SetServoStatus_Response;

// Struct for a sequence of akari_msgs__srv__SetServoStatus_Response.
typedef struct akari_msgs__srv__SetServoStatus_Response__Sequence
{
  akari_msgs__srv__SetServoStatus_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} akari_msgs__srv__SetServoStatus_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AKARI_MSGS__SRV__DETAIL__SET_SERVO_STATUS__STRUCT_H_
