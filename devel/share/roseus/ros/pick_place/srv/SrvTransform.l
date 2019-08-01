;; Auto-generated. Do not edit!


(when (boundp 'pick_place::SrvTransform)
  (if (not (find-package "PICK_PLACE"))
    (make-package "PICK_PLACE"))
  (shadow 'SrvTransform (find-package "PICK_PLACE")))
(unless (find-package "PICK_PLACE::SRVTRANSFORM")
  (make-package "PICK_PLACE::SRVTRANSFORM"))
(unless (find-package "PICK_PLACE::SRVTRANSFORMREQUEST")
  (make-package "PICK_PLACE::SRVTRANSFORMREQUEST"))
(unless (find-package "PICK_PLACE::SRVTRANSFORMRESPONSE")
  (make-package "PICK_PLACE::SRVTRANSFORMRESPONSE"))

(in-package "ROS")

(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))




(defclass pick_place::SrvTransformRequest
  :super ros::object
  :slots (_origin _target ))

(defmethod pick_place::SrvTransformRequest
  (:init
   (&key
    ((:origin __origin) (instance geometry_msgs::Transform :init))
    ((:target __target) (instance geometry_msgs::Transform :init))
    )
   (send-super :init)
   (setq _origin __origin)
   (setq _target __target)
   self)
  (:origin
   (&rest __origin)
   (if (keywordp (car __origin))
       (send* _origin __origin)
     (progn
       (if __origin (setq _origin (car __origin)))
       _origin)))
  (:target
   (&rest __target)
   (if (keywordp (car __target))
       (send* _target __target)
     (progn
       (if __target (setq _target (car __target)))
       _target)))
  (:serialization-length
   ()
   (+
    ;; geometry_msgs/Transform _origin
    (send _origin :serialization-length)
    ;; geometry_msgs/Transform _target
    (send _target :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; geometry_msgs/Transform _origin
       (send _origin :serialize s)
     ;; geometry_msgs/Transform _target
       (send _target :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; geometry_msgs/Transform _origin
     (send _origin :deserialize buf ptr-) (incf ptr- (send _origin :serialization-length))
   ;; geometry_msgs/Transform _target
     (send _target :deserialize buf ptr-) (incf ptr- (send _target :serialization-length))
   ;;
   self)
  )

(defclass pick_place::SrvTransformResponse
  :super ros::object
  :slots (_result ))

(defmethod pick_place::SrvTransformResponse
  (:init
   (&key
    ((:result __result) nil)
    )
   (send-super :init)
   (setq _result __result)
   self)
  (:result
   (&optional __result)
   (if __result (setq _result __result)) _result)
  (:serialization-length
   ()
   (+
    ;; bool _result
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _result
       (if _result (write-byte -1 s) (write-byte 0 s))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _result
     (setq _result (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;;
   self)
  )

(defclass pick_place::SrvTransform
  :super ros::object
  :slots ())

(setf (get pick_place::SrvTransform :md5sum-) "77978c20bc039a00bc9de385da9b5ab9")
(setf (get pick_place::SrvTransform :datatype-) "pick_place/SrvTransform")
(setf (get pick_place::SrvTransform :request) pick_place::SrvTransformRequest)
(setf (get pick_place::SrvTransform :response) pick_place::SrvTransformResponse)

(defmethod pick_place::SrvTransformRequest
  (:response () (instance pick_place::SrvTransformResponse :init)))

(setf (get pick_place::SrvTransformRequest :md5sum-) "77978c20bc039a00bc9de385da9b5ab9")
(setf (get pick_place::SrvTransformRequest :datatype-) "pick_place/SrvTransformRequest")
(setf (get pick_place::SrvTransformRequest :definition-)
      "geometry_msgs/Transform origin
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
---
bool result



")

(setf (get pick_place::SrvTransformResponse :md5sum-) "77978c20bc039a00bc9de385da9b5ab9")
(setf (get pick_place::SrvTransformResponse :datatype-) "pick_place/SrvTransformResponse")
(setf (get pick_place::SrvTransformResponse :definition-)
      "geometry_msgs/Transform origin
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
---
bool result



")



(provide :pick_place/SrvTransform "77978c20bc039a00bc9de385da9b5ab9")


