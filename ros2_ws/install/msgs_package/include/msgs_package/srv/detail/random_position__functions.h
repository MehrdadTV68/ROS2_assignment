// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from msgs_package:srv/RandomPosition.idl
// generated code does not contain a copyright notice

#ifndef MSGS_PACKAGE__SRV__DETAIL__RANDOM_POSITION__FUNCTIONS_H_
#define MSGS_PACKAGE__SRV__DETAIL__RANDOM_POSITION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "msgs_package/msg/rosidl_generator_c__visibility_control.h"

#include "msgs_package/srv/detail/random_position__struct.h"

/// Initialize srv/RandomPosition message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msgs_package__srv__RandomPosition_Request
 * )) before or use
 * msgs_package__srv__RandomPosition_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_package
bool
msgs_package__srv__RandomPosition_Request__init(msgs_package__srv__RandomPosition_Request * msg);

/// Finalize srv/RandomPosition message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_package
void
msgs_package__srv__RandomPosition_Request__fini(msgs_package__srv__RandomPosition_Request * msg);

/// Create srv/RandomPosition message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msgs_package__srv__RandomPosition_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_package
msgs_package__srv__RandomPosition_Request *
msgs_package__srv__RandomPosition_Request__create();

/// Destroy srv/RandomPosition message.
/**
 * It calls
 * msgs_package__srv__RandomPosition_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_package
void
msgs_package__srv__RandomPosition_Request__destroy(msgs_package__srv__RandomPosition_Request * msg);


/// Initialize array of srv/RandomPosition messages.
/**
 * It allocates the memory for the number of elements and calls
 * msgs_package__srv__RandomPosition_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_package
bool
msgs_package__srv__RandomPosition_Request__Sequence__init(msgs_package__srv__RandomPosition_Request__Sequence * array, size_t size);

/// Finalize array of srv/RandomPosition messages.
/**
 * It calls
 * msgs_package__srv__RandomPosition_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_package
void
msgs_package__srv__RandomPosition_Request__Sequence__fini(msgs_package__srv__RandomPosition_Request__Sequence * array);

/// Create array of srv/RandomPosition messages.
/**
 * It allocates the memory for the array and calls
 * msgs_package__srv__RandomPosition_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_package
msgs_package__srv__RandomPosition_Request__Sequence *
msgs_package__srv__RandomPosition_Request__Sequence__create(size_t size);

/// Destroy array of srv/RandomPosition messages.
/**
 * It calls
 * msgs_package__srv__RandomPosition_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_package
void
msgs_package__srv__RandomPosition_Request__Sequence__destroy(msgs_package__srv__RandomPosition_Request__Sequence * array);

/// Initialize srv/RandomPosition message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msgs_package__srv__RandomPosition_Response
 * )) before or use
 * msgs_package__srv__RandomPosition_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_package
bool
msgs_package__srv__RandomPosition_Response__init(msgs_package__srv__RandomPosition_Response * msg);

/// Finalize srv/RandomPosition message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_package
void
msgs_package__srv__RandomPosition_Response__fini(msgs_package__srv__RandomPosition_Response * msg);

/// Create srv/RandomPosition message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msgs_package__srv__RandomPosition_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_package
msgs_package__srv__RandomPosition_Response *
msgs_package__srv__RandomPosition_Response__create();

/// Destroy srv/RandomPosition message.
/**
 * It calls
 * msgs_package__srv__RandomPosition_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_package
void
msgs_package__srv__RandomPosition_Response__destroy(msgs_package__srv__RandomPosition_Response * msg);


/// Initialize array of srv/RandomPosition messages.
/**
 * It allocates the memory for the number of elements and calls
 * msgs_package__srv__RandomPosition_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_package
bool
msgs_package__srv__RandomPosition_Response__Sequence__init(msgs_package__srv__RandomPosition_Response__Sequence * array, size_t size);

/// Finalize array of srv/RandomPosition messages.
/**
 * It calls
 * msgs_package__srv__RandomPosition_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_package
void
msgs_package__srv__RandomPosition_Response__Sequence__fini(msgs_package__srv__RandomPosition_Response__Sequence * array);

/// Create array of srv/RandomPosition messages.
/**
 * It allocates the memory for the array and calls
 * msgs_package__srv__RandomPosition_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_package
msgs_package__srv__RandomPosition_Response__Sequence *
msgs_package__srv__RandomPosition_Response__Sequence__create(size_t size);

/// Destroy array of srv/RandomPosition messages.
/**
 * It calls
 * msgs_package__srv__RandomPosition_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msgs_package
void
msgs_package__srv__RandomPosition_Response__Sequence__destroy(msgs_package__srv__RandomPosition_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MSGS_PACKAGE__SRV__DETAIL__RANDOM_POSITION__FUNCTIONS_H_