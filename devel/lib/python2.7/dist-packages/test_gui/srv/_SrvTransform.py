# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from test_gui/SrvTransformRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class SrvTransformRequest(genpy.Message):
  _md5sum = "3848f0df5d35e9eee9cfb2077e99e33b"
  _type = "test_gui/SrvTransformRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """geometry_msgs/Transform origin
geometry_msgs/Transform target

================================================================================
MSG: geometry_msgs/Transform
# This represents the transform between two coordinate frames in free space.

Vector3 translation
Quaternion rotation

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z
================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w
"""
  __slots__ = ['origin','target']
  _slot_types = ['geometry_msgs/Transform','geometry_msgs/Transform']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       origin,target

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SrvTransformRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.origin is None:
        self.origin = geometry_msgs.msg.Transform()
      if self.target is None:
        self.target = geometry_msgs.msg.Transform()
    else:
      self.origin = geometry_msgs.msg.Transform()
      self.target = geometry_msgs.msg.Transform()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_14d().pack(_x.origin.translation.x, _x.origin.translation.y, _x.origin.translation.z, _x.origin.rotation.x, _x.origin.rotation.y, _x.origin.rotation.z, _x.origin.rotation.w, _x.target.translation.x, _x.target.translation.y, _x.target.translation.z, _x.target.rotation.x, _x.target.rotation.y, _x.target.rotation.z, _x.target.rotation.w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.origin is None:
        self.origin = geometry_msgs.msg.Transform()
      if self.target is None:
        self.target = geometry_msgs.msg.Transform()
      end = 0
      _x = self
      start = end
      end += 112
      (_x.origin.translation.x, _x.origin.translation.y, _x.origin.translation.z, _x.origin.rotation.x, _x.origin.rotation.y, _x.origin.rotation.z, _x.origin.rotation.w, _x.target.translation.x, _x.target.translation.y, _x.target.translation.z, _x.target.rotation.x, _x.target.rotation.y, _x.target.rotation.z, _x.target.rotation.w,) = _get_struct_14d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_14d().pack(_x.origin.translation.x, _x.origin.translation.y, _x.origin.translation.z, _x.origin.rotation.x, _x.origin.rotation.y, _x.origin.rotation.z, _x.origin.rotation.w, _x.target.translation.x, _x.target.translation.y, _x.target.translation.z, _x.target.rotation.x, _x.target.rotation.y, _x.target.rotation.z, _x.target.rotation.w))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.origin is None:
        self.origin = geometry_msgs.msg.Transform()
      if self.target is None:
        self.target = geometry_msgs.msg.Transform()
      end = 0
      _x = self
      start = end
      end += 112
      (_x.origin.translation.x, _x.origin.translation.y, _x.origin.translation.z, _x.origin.rotation.x, _x.origin.rotation.y, _x.origin.rotation.z, _x.origin.rotation.w, _x.target.translation.x, _x.target.translation.y, _x.target.translation.z, _x.target.rotation.x, _x.target.rotation.y, _x.target.rotation.z, _x.target.rotation.w,) = _get_struct_14d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_14d = None
def _get_struct_14d():
    global _struct_14d
    if _struct_14d is None:
        _struct_14d = struct.Struct("<14d")
    return _struct_14d
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from test_gui/SrvTransformResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class SrvTransformResponse(genpy.Message):
  _md5sum = "eb13ac1f1354ccecb7941ee8fa2192e8"
  _type = "test_gui/SrvTransformResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """bool result


"""
  __slots__ = ['result']
  _slot_types = ['bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       result

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(SrvTransformResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.result is None:
        self.result = False
    else:
      self.result = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      buff.write(_get_struct_B().pack(self.result))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 1
      (self.result,) = _get_struct_B().unpack(str[start:end])
      self.result = bool(self.result)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      buff.write(_get_struct_B().pack(self.result))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 1
      (self.result,) = _get_struct_B().unpack(str[start:end])
      self.result = bool(self.result)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
class SrvTransform(object):
  _type          = 'test_gui/SrvTransform'
  _md5sum = '77978c20bc039a00bc9de385da9b5ab9'
  _request_class  = SrvTransformRequest
  _response_class = SrvTransformResponse
