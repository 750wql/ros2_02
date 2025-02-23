// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from info_interfaces:msg/Area.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "info_interfaces/msg/detail/area__struct.h"
#include "info_interfaces/msg/detail/area__functions.h"

bool info_interfaces__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * info_interfaces__msg__point__convert_to_py(void * raw_ros_message);
bool info_interfaces__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * info_interfaces__msg__point__convert_to_py(void * raw_ros_message);
bool info_interfaces__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * info_interfaces__msg__point__convert_to_py(void * raw_ros_message);
bool info_interfaces__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * info_interfaces__msg__point__convert_to_py(void * raw_ros_message);
bool info_interfaces__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * info_interfaces__msg__point__convert_to_py(void * raw_ros_message);
bool info_interfaces__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * info_interfaces__msg__point__convert_to_py(void * raw_ros_message);
bool info_interfaces__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * info_interfaces__msg__point__convert_to_py(void * raw_ros_message);
bool info_interfaces__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * info_interfaces__msg__point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool info_interfaces__msg__area__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[31];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("info_interfaces.msg._area.Area", full_classname_dest, 30) == 0);
  }
  info_interfaces__msg__Area * ros_message = _ros_message;
  {  // base
    PyObject * field = PyObject_GetAttrString(_pymsg, "base");
    if (!field) {
      return false;
    }
    if (!info_interfaces__msg__point__convert_from_py(field, &ros_message->base)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // recover
    PyObject * field = PyObject_GetAttrString(_pymsg, "recover");
    if (!field) {
      return false;
    }
    if (!info_interfaces__msg__point__convert_from_py(field, &ros_message->recover)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // password
    PyObject * field = PyObject_GetAttrString(_pymsg, "password");
    if (!field) {
      return false;
    }
    if (!info_interfaces__msg__point__convert_from_py(field, &ros_message->password)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // green_in
    PyObject * field = PyObject_GetAttrString(_pymsg, "green_in");
    if (!field) {
      return false;
    }
    if (!info_interfaces__msg__point__convert_from_py(field, &ros_message->green_in)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // green_out
    PyObject * field = PyObject_GetAttrString(_pymsg, "green_out");
    if (!field) {
      return false;
    }
    if (!info_interfaces__msg__point__convert_from_py(field, &ros_message->green_out)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // purple_in
    PyObject * field = PyObject_GetAttrString(_pymsg, "purple_in");
    if (!field) {
      return false;
    }
    if (!info_interfaces__msg__point__convert_from_py(field, &ros_message->purple_in)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // purple_out
    PyObject * field = PyObject_GetAttrString(_pymsg, "purple_out");
    if (!field) {
      return false;
    }
    if (!info_interfaces__msg__point__convert_from_py(field, &ros_message->purple_out)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // hp
    PyObject * field = PyObject_GetAttrString(_pymsg, "hp");
    if (!field) {
      return false;
    }
    if (!info_interfaces__msg__point__convert_from_py(field, &ros_message->hp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * info_interfaces__msg__area__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Area */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("info_interfaces.msg._area");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Area");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  info_interfaces__msg__Area * ros_message = (info_interfaces__msg__Area *)raw_ros_message;
  {  // base
    PyObject * field = NULL;
    field = info_interfaces__msg__point__convert_to_py(&ros_message->base);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "base", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // recover
    PyObject * field = NULL;
    field = info_interfaces__msg__point__convert_to_py(&ros_message->recover);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "recover", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // password
    PyObject * field = NULL;
    field = info_interfaces__msg__point__convert_to_py(&ros_message->password);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "password", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // green_in
    PyObject * field = NULL;
    field = info_interfaces__msg__point__convert_to_py(&ros_message->green_in);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "green_in", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // green_out
    PyObject * field = NULL;
    field = info_interfaces__msg__point__convert_to_py(&ros_message->green_out);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "green_out", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // purple_in
    PyObject * field = NULL;
    field = info_interfaces__msg__point__convert_to_py(&ros_message->purple_in);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "purple_in", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // purple_out
    PyObject * field = NULL;
    field = info_interfaces__msg__point__convert_to_py(&ros_message->purple_out);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "purple_out", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hp
    PyObject * field = NULL;
    field = info_interfaces__msg__point__convert_to_py(&ros_message->hp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "hp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
