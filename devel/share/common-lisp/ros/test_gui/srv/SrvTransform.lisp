; Auto-generated. Do not edit!


(cl:in-package test_gui-srv)


;//! \htmlinclude SrvTransform-request.msg.html

(cl:defclass <SrvTransform-request> (roslisp-msg-protocol:ros-message)
  ((origin
    :reader origin
    :initarg :origin
    :type geometry_msgs-msg:Transform
    :initform (cl:make-instance 'geometry_msgs-msg:Transform))
   (target
    :reader target
    :initarg :target
    :type geometry_msgs-msg:Transform
    :initform (cl:make-instance 'geometry_msgs-msg:Transform)))
)

(cl:defclass SrvTransform-request (<SrvTransform-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SrvTransform-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SrvTransform-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name test_gui-srv:<SrvTransform-request> is deprecated: use test_gui-srv:SrvTransform-request instead.")))

(cl:ensure-generic-function 'origin-val :lambda-list '(m))
(cl:defmethod origin-val ((m <SrvTransform-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader test_gui-srv:origin-val is deprecated.  Use test_gui-srv:origin instead.")
  (origin m))

(cl:ensure-generic-function 'target-val :lambda-list '(m))
(cl:defmethod target-val ((m <SrvTransform-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader test_gui-srv:target-val is deprecated.  Use test_gui-srv:target instead.")
  (target m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SrvTransform-request>) ostream)
  "Serializes a message object of type '<SrvTransform-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'origin) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'target) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SrvTransform-request>) istream)
  "Deserializes a message object of type '<SrvTransform-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'origin) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'target) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SrvTransform-request>)))
  "Returns string type for a service object of type '<SrvTransform-request>"
  "test_gui/SrvTransformRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SrvTransform-request)))
  "Returns string type for a service object of type 'SrvTransform-request"
  "test_gui/SrvTransformRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SrvTransform-request>)))
  "Returns md5sum for a message object of type '<SrvTransform-request>"
  "77978c20bc039a00bc9de385da9b5ab9")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SrvTransform-request)))
  "Returns md5sum for a message object of type 'SrvTransform-request"
  "77978c20bc039a00bc9de385da9b5ab9")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SrvTransform-request>)))
  "Returns full string definition for message of type '<SrvTransform-request>"
  (cl:format cl:nil "geometry_msgs/Transform origin~%geometry_msgs/Transform target~%~%================================================================================~%MSG: geometry_msgs/Transform~%# This represents the transform between two coordinate frames in free space.~%~%Vector3 translation~%Quaternion rotation~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SrvTransform-request)))
  "Returns full string definition for message of type 'SrvTransform-request"
  (cl:format cl:nil "geometry_msgs/Transform origin~%geometry_msgs/Transform target~%~%================================================================================~%MSG: geometry_msgs/Transform~%# This represents the transform between two coordinate frames in free space.~%~%Vector3 translation~%Quaternion rotation~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SrvTransform-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'origin))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'target))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SrvTransform-request>))
  "Converts a ROS message object to a list"
  (cl:list 'SrvTransform-request
    (cl:cons ':origin (origin msg))
    (cl:cons ':target (target msg))
))
;//! \htmlinclude SrvTransform-response.msg.html

(cl:defclass <SrvTransform-response> (roslisp-msg-protocol:ros-message)
  ((result
    :reader result
    :initarg :result
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass SrvTransform-response (<SrvTransform-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SrvTransform-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SrvTransform-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name test_gui-srv:<SrvTransform-response> is deprecated: use test_gui-srv:SrvTransform-response instead.")))

(cl:ensure-generic-function 'result-val :lambda-list '(m))
(cl:defmethod result-val ((m <SrvTransform-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader test_gui-srv:result-val is deprecated.  Use test_gui-srv:result instead.")
  (result m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SrvTransform-response>) ostream)
  "Serializes a message object of type '<SrvTransform-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'result) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SrvTransform-response>) istream)
  "Deserializes a message object of type '<SrvTransform-response>"
    (cl:setf (cl:slot-value msg 'result) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SrvTransform-response>)))
  "Returns string type for a service object of type '<SrvTransform-response>"
  "test_gui/SrvTransformResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SrvTransform-response)))
  "Returns string type for a service object of type 'SrvTransform-response"
  "test_gui/SrvTransformResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SrvTransform-response>)))
  "Returns md5sum for a message object of type '<SrvTransform-response>"
  "77978c20bc039a00bc9de385da9b5ab9")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SrvTransform-response)))
  "Returns md5sum for a message object of type 'SrvTransform-response"
  "77978c20bc039a00bc9de385da9b5ab9")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SrvTransform-response>)))
  "Returns full string definition for message of type '<SrvTransform-response>"
  (cl:format cl:nil "bool result~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SrvTransform-response)))
  "Returns full string definition for message of type 'SrvTransform-response"
  (cl:format cl:nil "bool result~%~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SrvTransform-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SrvTransform-response>))
  "Converts a ROS message object to a list"
  (cl:list 'SrvTransform-response
    (cl:cons ':result (result msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'SrvTransform)))
  'SrvTransform-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'SrvTransform)))
  'SrvTransform-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SrvTransform)))
  "Returns string type for a service object of type '<SrvTransform>"
  "test_gui/SrvTransform")