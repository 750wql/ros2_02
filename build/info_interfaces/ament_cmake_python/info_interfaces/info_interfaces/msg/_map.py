# generated from rosidl_generator_py/resource/_idl.py.em
# with input from info_interfaces:msg/Map.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'mat'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Map(type):
    """Metaclass of message 'Map'."""

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
                'info_interfaces.msg.Map')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__map
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__map
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__map
            cls._TYPE_SUPPORT = module.type_support_msg__msg__map
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__map

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Map(metaclass=Metaclass_Map):
    """Message class 'Map'."""

    __slots__ = [
        '_row',
        '_col',
        '_grid_width',
        '_grid_height',
        '_mat',
    ]

    _fields_and_field_types = {
        'row': 'uint32',
        'col': 'uint32',
        'grid_width': 'uint32',
        'grid_height': 'uint32',
        'mat': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.row = kwargs.get('row', int())
        self.col = kwargs.get('col', int())
        self.grid_width = kwargs.get('grid_width', int())
        self.grid_height = kwargs.get('grid_height', int())
        self.mat = array.array('B', kwargs.get('mat', []))

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
        if self.row != other.row:
            return False
        if self.col != other.col:
            return False
        if self.grid_width != other.grid_width:
            return False
        if self.grid_height != other.grid_height:
            return False
        if self.mat != other.mat:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def row(self):
        """Message field 'row'."""
        return self._row

    @row.setter
    def row(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'row' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'row' field must be an unsigned integer in [0, 4294967295]"
        self._row = value

    @builtins.property
    def col(self):
        """Message field 'col'."""
        return self._col

    @col.setter
    def col(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'col' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'col' field must be an unsigned integer in [0, 4294967295]"
        self._col = value

    @builtins.property
    def grid_width(self):
        """Message field 'grid_width'."""
        return self._grid_width

    @grid_width.setter
    def grid_width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'grid_width' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'grid_width' field must be an unsigned integer in [0, 4294967295]"
        self._grid_width = value

    @builtins.property
    def grid_height(self):
        """Message field 'grid_height'."""
        return self._grid_height

    @grid_height.setter
    def grid_height(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'grid_height' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'grid_height' field must be an unsigned integer in [0, 4294967295]"
        self._grid_height = value

    @builtins.property
    def mat(self):
        """Message field 'mat'."""
        return self._mat

    @mat.setter
    def mat(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'mat' array.array() must have the type code of 'B'"
            self._mat = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'mat' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._mat = array.array('B', value)
