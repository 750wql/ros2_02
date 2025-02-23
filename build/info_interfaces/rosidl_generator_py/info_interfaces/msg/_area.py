# generated from rosidl_generator_py/resource/_idl.py.em
# with input from info_interfaces:msg/Area.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Area(type):
    """Metaclass of message 'Area'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('info_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'info_interfaces.msg.Area')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__area
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__area
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__area
            cls._TYPE_SUPPORT = module.type_support_msg__msg__area
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__area

            from info_interfaces.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Area(metaclass=Metaclass_Area):
    """Message class 'Area'."""

    __slots__ = [
        '_base',
        '_recover',
        '_password',
        '_green_in',
        '_green_out',
        '_purple_in',
        '_purple_out',
        '_hp',
    ]

    _fields_and_field_types = {
        'base': 'info_interfaces/Point',
        'recover': 'info_interfaces/Point',
        'password': 'info_interfaces/Point',
        'green_in': 'info_interfaces/Point',
        'green_out': 'info_interfaces/Point',
        'purple_in': 'info_interfaces/Point',
        'purple_out': 'info_interfaces/Point',
        'hp': 'info_interfaces/Point',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['info_interfaces', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['info_interfaces', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['info_interfaces', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['info_interfaces', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['info_interfaces', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['info_interfaces', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['info_interfaces', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['info_interfaces', 'msg'], 'Point'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from info_interfaces.msg import Point
        self.base = kwargs.get('base', Point())
        from info_interfaces.msg import Point
        self.recover = kwargs.get('recover', Point())
        from info_interfaces.msg import Point
        self.password = kwargs.get('password', Point())
        from info_interfaces.msg import Point
        self.green_in = kwargs.get('green_in', Point())
        from info_interfaces.msg import Point
        self.green_out = kwargs.get('green_out', Point())
        from info_interfaces.msg import Point
        self.purple_in = kwargs.get('purple_in', Point())
        from info_interfaces.msg import Point
        self.purple_out = kwargs.get('purple_out', Point())
        from info_interfaces.msg import Point
        self.hp = kwargs.get('hp', Point())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.base != other.base:
            return False
        if self.recover != other.recover:
            return False
        if self.password != other.password:
            return False
        if self.green_in != other.green_in:
            return False
        if self.green_out != other.green_out:
            return False
        if self.purple_in != other.purple_in:
            return False
        if self.purple_out != other.purple_out:
            return False
        if self.hp != other.hp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def base(self):
        """Message field 'base'."""
        return self._base

    @base.setter
    def base(self, value):
        if __debug__:
            from info_interfaces.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'base' field must be a sub message of type 'Point'"
        self._base = value

    @builtins.property
    def recover(self):
        """Message field 'recover'."""
        return self._recover

    @recover.setter
    def recover(self, value):
        if __debug__:
            from info_interfaces.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'recover' field must be a sub message of type 'Point'"
        self._recover = value

    @builtins.property
    def password(self):
        """Message field 'password'."""
        return self._password

    @password.setter
    def password(self, value):
        if __debug__:
            from info_interfaces.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'password' field must be a sub message of type 'Point'"
        self._password = value

    @builtins.property
    def green_in(self):
        """Message field 'green_in'."""
        return self._green_in

    @green_in.setter
    def green_in(self, value):
        if __debug__:
            from info_interfaces.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'green_in' field must be a sub message of type 'Point'"
        self._green_in = value

    @builtins.property
    def green_out(self):
        """Message field 'green_out'."""
        return self._green_out

    @green_out.setter
    def green_out(self, value):
        if __debug__:
            from info_interfaces.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'green_out' field must be a sub message of type 'Point'"
        self._green_out = value

    @builtins.property
    def purple_in(self):
        """Message field 'purple_in'."""
        return self._purple_in

    @purple_in.setter
    def purple_in(self, value):
        if __debug__:
            from info_interfaces.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'purple_in' field must be a sub message of type 'Point'"
        self._purple_in = value

    @builtins.property
    def purple_out(self):
        """Message field 'purple_out'."""
        return self._purple_out

    @purple_out.setter
    def purple_out(self, value):
        if __debug__:
            from info_interfaces.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'purple_out' field must be a sub message of type 'Point'"
        self._purple_out = value

    @builtins.property
    def hp(self):
        """Message field 'hp'."""
        return self._hp

    @hp.setter
    def hp(self, value):
        if __debug__:
            from info_interfaces.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'hp' field must be a sub message of type 'Point'"
        self._hp = value
