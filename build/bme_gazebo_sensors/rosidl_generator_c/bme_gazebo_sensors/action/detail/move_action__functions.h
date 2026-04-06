// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from bme_gazebo_sensors:action/MoveAction.idl
// generated code does not contain a copyright notice

#ifndef BME_GAZEBO_SENSORS__ACTION__DETAIL__MOVE_ACTION__FUNCTIONS_H_
#define BME_GAZEBO_SENSORS__ACTION__DETAIL__MOVE_ACTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "bme_gazebo_sensors/msg/rosidl_generator_c__visibility_control.h"

#include "bme_gazebo_sensors/action/detail/move_action__struct.h"

/// Initialize action/MoveAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bme_gazebo_sensors__action__MoveAction_Goal
 * )) before or use
 * bme_gazebo_sensors__action__MoveAction_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_Goal__init(bme_gazebo_sensors__action__MoveAction_Goal * msg);

/// Finalize action/MoveAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_Goal__fini(bme_gazebo_sensors__action__MoveAction_Goal * msg);

/// Create action/MoveAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bme_gazebo_sensors__action__MoveAction_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bme_gazebo_sensors__action__MoveAction_Goal *
bme_gazebo_sensors__action__MoveAction_Goal__create();

/// Destroy action/MoveAction message.
/**
 * It calls
 * bme_gazebo_sensors__action__MoveAction_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_Goal__destroy(bme_gazebo_sensors__action__MoveAction_Goal * msg);

/// Check for action/MoveAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_Goal__are_equal(const bme_gazebo_sensors__action__MoveAction_Goal * lhs, const bme_gazebo_sensors__action__MoveAction_Goal * rhs);

/// Copy a action/MoveAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_Goal__copy(
  const bme_gazebo_sensors__action__MoveAction_Goal * input,
  bme_gazebo_sensors__action__MoveAction_Goal * output);

/// Initialize array of action/MoveAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * bme_gazebo_sensors__action__MoveAction_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_Goal__Sequence__init(bme_gazebo_sensors__action__MoveAction_Goal__Sequence * array, size_t size);

/// Finalize array of action/MoveAction messages.
/**
 * It calls
 * bme_gazebo_sensors__action__MoveAction_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_Goal__Sequence__fini(bme_gazebo_sensors__action__MoveAction_Goal__Sequence * array);

/// Create array of action/MoveAction messages.
/**
 * It allocates the memory for the array and calls
 * bme_gazebo_sensors__action__MoveAction_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bme_gazebo_sensors__action__MoveAction_Goal__Sequence *
bme_gazebo_sensors__action__MoveAction_Goal__Sequence__create(size_t size);

/// Destroy array of action/MoveAction messages.
/**
 * It calls
 * bme_gazebo_sensors__action__MoveAction_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_Goal__Sequence__destroy(bme_gazebo_sensors__action__MoveAction_Goal__Sequence * array);

/// Check for action/MoveAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_Goal__Sequence__are_equal(const bme_gazebo_sensors__action__MoveAction_Goal__Sequence * lhs, const bme_gazebo_sensors__action__MoveAction_Goal__Sequence * rhs);

/// Copy an array of action/MoveAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_Goal__Sequence__copy(
  const bme_gazebo_sensors__action__MoveAction_Goal__Sequence * input,
  bme_gazebo_sensors__action__MoveAction_Goal__Sequence * output);

/// Initialize action/MoveAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bme_gazebo_sensors__action__MoveAction_Result
 * )) before or use
 * bme_gazebo_sensors__action__MoveAction_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_Result__init(bme_gazebo_sensors__action__MoveAction_Result * msg);

/// Finalize action/MoveAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_Result__fini(bme_gazebo_sensors__action__MoveAction_Result * msg);

/// Create action/MoveAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bme_gazebo_sensors__action__MoveAction_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bme_gazebo_sensors__action__MoveAction_Result *
bme_gazebo_sensors__action__MoveAction_Result__create();

/// Destroy action/MoveAction message.
/**
 * It calls
 * bme_gazebo_sensors__action__MoveAction_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_Result__destroy(bme_gazebo_sensors__action__MoveAction_Result * msg);

/// Check for action/MoveAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_Result__are_equal(const bme_gazebo_sensors__action__MoveAction_Result * lhs, const bme_gazebo_sensors__action__MoveAction_Result * rhs);

/// Copy a action/MoveAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_Result__copy(
  const bme_gazebo_sensors__action__MoveAction_Result * input,
  bme_gazebo_sensors__action__MoveAction_Result * output);

/// Initialize array of action/MoveAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * bme_gazebo_sensors__action__MoveAction_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_Result__Sequence__init(bme_gazebo_sensors__action__MoveAction_Result__Sequence * array, size_t size);

/// Finalize array of action/MoveAction messages.
/**
 * It calls
 * bme_gazebo_sensors__action__MoveAction_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_Result__Sequence__fini(bme_gazebo_sensors__action__MoveAction_Result__Sequence * array);

/// Create array of action/MoveAction messages.
/**
 * It allocates the memory for the array and calls
 * bme_gazebo_sensors__action__MoveAction_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bme_gazebo_sensors__action__MoveAction_Result__Sequence *
bme_gazebo_sensors__action__MoveAction_Result__Sequence__create(size_t size);

/// Destroy array of action/MoveAction messages.
/**
 * It calls
 * bme_gazebo_sensors__action__MoveAction_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_Result__Sequence__destroy(bme_gazebo_sensors__action__MoveAction_Result__Sequence * array);

/// Check for action/MoveAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_Result__Sequence__are_equal(const bme_gazebo_sensors__action__MoveAction_Result__Sequence * lhs, const bme_gazebo_sensors__action__MoveAction_Result__Sequence * rhs);

/// Copy an array of action/MoveAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_Result__Sequence__copy(
  const bme_gazebo_sensors__action__MoveAction_Result__Sequence * input,
  bme_gazebo_sensors__action__MoveAction_Result__Sequence * output);

/// Initialize action/MoveAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bme_gazebo_sensors__action__MoveAction_Feedback
 * )) before or use
 * bme_gazebo_sensors__action__MoveAction_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_Feedback__init(bme_gazebo_sensors__action__MoveAction_Feedback * msg);

/// Finalize action/MoveAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_Feedback__fini(bme_gazebo_sensors__action__MoveAction_Feedback * msg);

/// Create action/MoveAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bme_gazebo_sensors__action__MoveAction_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bme_gazebo_sensors__action__MoveAction_Feedback *
bme_gazebo_sensors__action__MoveAction_Feedback__create();

/// Destroy action/MoveAction message.
/**
 * It calls
 * bme_gazebo_sensors__action__MoveAction_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_Feedback__destroy(bme_gazebo_sensors__action__MoveAction_Feedback * msg);

/// Check for action/MoveAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_Feedback__are_equal(const bme_gazebo_sensors__action__MoveAction_Feedback * lhs, const bme_gazebo_sensors__action__MoveAction_Feedback * rhs);

/// Copy a action/MoveAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_Feedback__copy(
  const bme_gazebo_sensors__action__MoveAction_Feedback * input,
  bme_gazebo_sensors__action__MoveAction_Feedback * output);

/// Initialize array of action/MoveAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * bme_gazebo_sensors__action__MoveAction_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_Feedback__Sequence__init(bme_gazebo_sensors__action__MoveAction_Feedback__Sequence * array, size_t size);

/// Finalize array of action/MoveAction messages.
/**
 * It calls
 * bme_gazebo_sensors__action__MoveAction_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_Feedback__Sequence__fini(bme_gazebo_sensors__action__MoveAction_Feedback__Sequence * array);

/// Create array of action/MoveAction messages.
/**
 * It allocates the memory for the array and calls
 * bme_gazebo_sensors__action__MoveAction_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bme_gazebo_sensors__action__MoveAction_Feedback__Sequence *
bme_gazebo_sensors__action__MoveAction_Feedback__Sequence__create(size_t size);

/// Destroy array of action/MoveAction messages.
/**
 * It calls
 * bme_gazebo_sensors__action__MoveAction_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_Feedback__Sequence__destroy(bme_gazebo_sensors__action__MoveAction_Feedback__Sequence * array);

/// Check for action/MoveAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_Feedback__Sequence__are_equal(const bme_gazebo_sensors__action__MoveAction_Feedback__Sequence * lhs, const bme_gazebo_sensors__action__MoveAction_Feedback__Sequence * rhs);

/// Copy an array of action/MoveAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_Feedback__Sequence__copy(
  const bme_gazebo_sensors__action__MoveAction_Feedback__Sequence * input,
  bme_gazebo_sensors__action__MoveAction_Feedback__Sequence * output);

/// Initialize action/MoveAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bme_gazebo_sensors__action__MoveAction_SendGoal_Request
 * )) before or use
 * bme_gazebo_sensors__action__MoveAction_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_SendGoal_Request__init(bme_gazebo_sensors__action__MoveAction_SendGoal_Request * msg);

/// Finalize action/MoveAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_SendGoal_Request__fini(bme_gazebo_sensors__action__MoveAction_SendGoal_Request * msg);

/// Create action/MoveAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bme_gazebo_sensors__action__MoveAction_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bme_gazebo_sensors__action__MoveAction_SendGoal_Request *
bme_gazebo_sensors__action__MoveAction_SendGoal_Request__create();

/// Destroy action/MoveAction message.
/**
 * It calls
 * bme_gazebo_sensors__action__MoveAction_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_SendGoal_Request__destroy(bme_gazebo_sensors__action__MoveAction_SendGoal_Request * msg);

/// Check for action/MoveAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_SendGoal_Request__are_equal(const bme_gazebo_sensors__action__MoveAction_SendGoal_Request * lhs, const bme_gazebo_sensors__action__MoveAction_SendGoal_Request * rhs);

/// Copy a action/MoveAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_SendGoal_Request__copy(
  const bme_gazebo_sensors__action__MoveAction_SendGoal_Request * input,
  bme_gazebo_sensors__action__MoveAction_SendGoal_Request * output);

/// Initialize array of action/MoveAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * bme_gazebo_sensors__action__MoveAction_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_SendGoal_Request__Sequence__init(bme_gazebo_sensors__action__MoveAction_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveAction messages.
/**
 * It calls
 * bme_gazebo_sensors__action__MoveAction_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_SendGoal_Request__Sequence__fini(bme_gazebo_sensors__action__MoveAction_SendGoal_Request__Sequence * array);

/// Create array of action/MoveAction messages.
/**
 * It allocates the memory for the array and calls
 * bme_gazebo_sensors__action__MoveAction_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bme_gazebo_sensors__action__MoveAction_SendGoal_Request__Sequence *
bme_gazebo_sensors__action__MoveAction_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveAction messages.
/**
 * It calls
 * bme_gazebo_sensors__action__MoveAction_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_SendGoal_Request__Sequence__destroy(bme_gazebo_sensors__action__MoveAction_SendGoal_Request__Sequence * array);

/// Check for action/MoveAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_SendGoal_Request__Sequence__are_equal(const bme_gazebo_sensors__action__MoveAction_SendGoal_Request__Sequence * lhs, const bme_gazebo_sensors__action__MoveAction_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/MoveAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_SendGoal_Request__Sequence__copy(
  const bme_gazebo_sensors__action__MoveAction_SendGoal_Request__Sequence * input,
  bme_gazebo_sensors__action__MoveAction_SendGoal_Request__Sequence * output);

/// Initialize action/MoveAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bme_gazebo_sensors__action__MoveAction_SendGoal_Response
 * )) before or use
 * bme_gazebo_sensors__action__MoveAction_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_SendGoal_Response__init(bme_gazebo_sensors__action__MoveAction_SendGoal_Response * msg);

/// Finalize action/MoveAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_SendGoal_Response__fini(bme_gazebo_sensors__action__MoveAction_SendGoal_Response * msg);

/// Create action/MoveAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bme_gazebo_sensors__action__MoveAction_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bme_gazebo_sensors__action__MoveAction_SendGoal_Response *
bme_gazebo_sensors__action__MoveAction_SendGoal_Response__create();

/// Destroy action/MoveAction message.
/**
 * It calls
 * bme_gazebo_sensors__action__MoveAction_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_SendGoal_Response__destroy(bme_gazebo_sensors__action__MoveAction_SendGoal_Response * msg);

/// Check for action/MoveAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_SendGoal_Response__are_equal(const bme_gazebo_sensors__action__MoveAction_SendGoal_Response * lhs, const bme_gazebo_sensors__action__MoveAction_SendGoal_Response * rhs);

/// Copy a action/MoveAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_SendGoal_Response__copy(
  const bme_gazebo_sensors__action__MoveAction_SendGoal_Response * input,
  bme_gazebo_sensors__action__MoveAction_SendGoal_Response * output);

/// Initialize array of action/MoveAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * bme_gazebo_sensors__action__MoveAction_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_SendGoal_Response__Sequence__init(bme_gazebo_sensors__action__MoveAction_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveAction messages.
/**
 * It calls
 * bme_gazebo_sensors__action__MoveAction_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_SendGoal_Response__Sequence__fini(bme_gazebo_sensors__action__MoveAction_SendGoal_Response__Sequence * array);

/// Create array of action/MoveAction messages.
/**
 * It allocates the memory for the array and calls
 * bme_gazebo_sensors__action__MoveAction_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bme_gazebo_sensors__action__MoveAction_SendGoal_Response__Sequence *
bme_gazebo_sensors__action__MoveAction_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveAction messages.
/**
 * It calls
 * bme_gazebo_sensors__action__MoveAction_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_SendGoal_Response__Sequence__destroy(bme_gazebo_sensors__action__MoveAction_SendGoal_Response__Sequence * array);

/// Check for action/MoveAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_SendGoal_Response__Sequence__are_equal(const bme_gazebo_sensors__action__MoveAction_SendGoal_Response__Sequence * lhs, const bme_gazebo_sensors__action__MoveAction_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/MoveAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_SendGoal_Response__Sequence__copy(
  const bme_gazebo_sensors__action__MoveAction_SendGoal_Response__Sequence * input,
  bme_gazebo_sensors__action__MoveAction_SendGoal_Response__Sequence * output);

/// Initialize action/MoveAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bme_gazebo_sensors__action__MoveAction_GetResult_Request
 * )) before or use
 * bme_gazebo_sensors__action__MoveAction_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_GetResult_Request__init(bme_gazebo_sensors__action__MoveAction_GetResult_Request * msg);

/// Finalize action/MoveAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_GetResult_Request__fini(bme_gazebo_sensors__action__MoveAction_GetResult_Request * msg);

/// Create action/MoveAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bme_gazebo_sensors__action__MoveAction_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bme_gazebo_sensors__action__MoveAction_GetResult_Request *
bme_gazebo_sensors__action__MoveAction_GetResult_Request__create();

/// Destroy action/MoveAction message.
/**
 * It calls
 * bme_gazebo_sensors__action__MoveAction_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_GetResult_Request__destroy(bme_gazebo_sensors__action__MoveAction_GetResult_Request * msg);

/// Check for action/MoveAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_GetResult_Request__are_equal(const bme_gazebo_sensors__action__MoveAction_GetResult_Request * lhs, const bme_gazebo_sensors__action__MoveAction_GetResult_Request * rhs);

/// Copy a action/MoveAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_GetResult_Request__copy(
  const bme_gazebo_sensors__action__MoveAction_GetResult_Request * input,
  bme_gazebo_sensors__action__MoveAction_GetResult_Request * output);

/// Initialize array of action/MoveAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * bme_gazebo_sensors__action__MoveAction_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_GetResult_Request__Sequence__init(bme_gazebo_sensors__action__MoveAction_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveAction messages.
/**
 * It calls
 * bme_gazebo_sensors__action__MoveAction_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_GetResult_Request__Sequence__fini(bme_gazebo_sensors__action__MoveAction_GetResult_Request__Sequence * array);

/// Create array of action/MoveAction messages.
/**
 * It allocates the memory for the array and calls
 * bme_gazebo_sensors__action__MoveAction_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bme_gazebo_sensors__action__MoveAction_GetResult_Request__Sequence *
bme_gazebo_sensors__action__MoveAction_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveAction messages.
/**
 * It calls
 * bme_gazebo_sensors__action__MoveAction_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_GetResult_Request__Sequence__destroy(bme_gazebo_sensors__action__MoveAction_GetResult_Request__Sequence * array);

/// Check for action/MoveAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_GetResult_Request__Sequence__are_equal(const bme_gazebo_sensors__action__MoveAction_GetResult_Request__Sequence * lhs, const bme_gazebo_sensors__action__MoveAction_GetResult_Request__Sequence * rhs);

/// Copy an array of action/MoveAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_GetResult_Request__Sequence__copy(
  const bme_gazebo_sensors__action__MoveAction_GetResult_Request__Sequence * input,
  bme_gazebo_sensors__action__MoveAction_GetResult_Request__Sequence * output);

/// Initialize action/MoveAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bme_gazebo_sensors__action__MoveAction_GetResult_Response
 * )) before or use
 * bme_gazebo_sensors__action__MoveAction_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_GetResult_Response__init(bme_gazebo_sensors__action__MoveAction_GetResult_Response * msg);

/// Finalize action/MoveAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_GetResult_Response__fini(bme_gazebo_sensors__action__MoveAction_GetResult_Response * msg);

/// Create action/MoveAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bme_gazebo_sensors__action__MoveAction_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bme_gazebo_sensors__action__MoveAction_GetResult_Response *
bme_gazebo_sensors__action__MoveAction_GetResult_Response__create();

/// Destroy action/MoveAction message.
/**
 * It calls
 * bme_gazebo_sensors__action__MoveAction_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_GetResult_Response__destroy(bme_gazebo_sensors__action__MoveAction_GetResult_Response * msg);

/// Check for action/MoveAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_GetResult_Response__are_equal(const bme_gazebo_sensors__action__MoveAction_GetResult_Response * lhs, const bme_gazebo_sensors__action__MoveAction_GetResult_Response * rhs);

/// Copy a action/MoveAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_GetResult_Response__copy(
  const bme_gazebo_sensors__action__MoveAction_GetResult_Response * input,
  bme_gazebo_sensors__action__MoveAction_GetResult_Response * output);

/// Initialize array of action/MoveAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * bme_gazebo_sensors__action__MoveAction_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_GetResult_Response__Sequence__init(bme_gazebo_sensors__action__MoveAction_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveAction messages.
/**
 * It calls
 * bme_gazebo_sensors__action__MoveAction_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_GetResult_Response__Sequence__fini(bme_gazebo_sensors__action__MoveAction_GetResult_Response__Sequence * array);

/// Create array of action/MoveAction messages.
/**
 * It allocates the memory for the array and calls
 * bme_gazebo_sensors__action__MoveAction_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bme_gazebo_sensors__action__MoveAction_GetResult_Response__Sequence *
bme_gazebo_sensors__action__MoveAction_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveAction messages.
/**
 * It calls
 * bme_gazebo_sensors__action__MoveAction_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_GetResult_Response__Sequence__destroy(bme_gazebo_sensors__action__MoveAction_GetResult_Response__Sequence * array);

/// Check for action/MoveAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_GetResult_Response__Sequence__are_equal(const bme_gazebo_sensors__action__MoveAction_GetResult_Response__Sequence * lhs, const bme_gazebo_sensors__action__MoveAction_GetResult_Response__Sequence * rhs);

/// Copy an array of action/MoveAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_GetResult_Response__Sequence__copy(
  const bme_gazebo_sensors__action__MoveAction_GetResult_Response__Sequence * input,
  bme_gazebo_sensors__action__MoveAction_GetResult_Response__Sequence * output);

/// Initialize action/MoveAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bme_gazebo_sensors__action__MoveAction_FeedbackMessage
 * )) before or use
 * bme_gazebo_sensors__action__MoveAction_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_FeedbackMessage__init(bme_gazebo_sensors__action__MoveAction_FeedbackMessage * msg);

/// Finalize action/MoveAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_FeedbackMessage__fini(bme_gazebo_sensors__action__MoveAction_FeedbackMessage * msg);

/// Create action/MoveAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bme_gazebo_sensors__action__MoveAction_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bme_gazebo_sensors__action__MoveAction_FeedbackMessage *
bme_gazebo_sensors__action__MoveAction_FeedbackMessage__create();

/// Destroy action/MoveAction message.
/**
 * It calls
 * bme_gazebo_sensors__action__MoveAction_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_FeedbackMessage__destroy(bme_gazebo_sensors__action__MoveAction_FeedbackMessage * msg);

/// Check for action/MoveAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_FeedbackMessage__are_equal(const bme_gazebo_sensors__action__MoveAction_FeedbackMessage * lhs, const bme_gazebo_sensors__action__MoveAction_FeedbackMessage * rhs);

/// Copy a action/MoveAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_FeedbackMessage__copy(
  const bme_gazebo_sensors__action__MoveAction_FeedbackMessage * input,
  bme_gazebo_sensors__action__MoveAction_FeedbackMessage * output);

/// Initialize array of action/MoveAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * bme_gazebo_sensors__action__MoveAction_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_FeedbackMessage__Sequence__init(bme_gazebo_sensors__action__MoveAction_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/MoveAction messages.
/**
 * It calls
 * bme_gazebo_sensors__action__MoveAction_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_FeedbackMessage__Sequence__fini(bme_gazebo_sensors__action__MoveAction_FeedbackMessage__Sequence * array);

/// Create array of action/MoveAction messages.
/**
 * It allocates the memory for the array and calls
 * bme_gazebo_sensors__action__MoveAction_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bme_gazebo_sensors__action__MoveAction_FeedbackMessage__Sequence *
bme_gazebo_sensors__action__MoveAction_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/MoveAction messages.
/**
 * It calls
 * bme_gazebo_sensors__action__MoveAction_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
void
bme_gazebo_sensors__action__MoveAction_FeedbackMessage__Sequence__destroy(bme_gazebo_sensors__action__MoveAction_FeedbackMessage__Sequence * array);

/// Check for action/MoveAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_FeedbackMessage__Sequence__are_equal(const bme_gazebo_sensors__action__MoveAction_FeedbackMessage__Sequence * lhs, const bme_gazebo_sensors__action__MoveAction_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/MoveAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_bme_gazebo_sensors
bool
bme_gazebo_sensors__action__MoveAction_FeedbackMessage__Sequence__copy(
  const bme_gazebo_sensors__action__MoveAction_FeedbackMessage__Sequence * input,
  bme_gazebo_sensors__action__MoveAction_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BME_GAZEBO_SENSORS__ACTION__DETAIL__MOVE_ACTION__FUNCTIONS_H_
