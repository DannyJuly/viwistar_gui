
(cl:in-package :asdf)

(defsystem "pick_place-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
)
  :components ((:file "_package")
    (:file "SrvTransform" :depends-on ("_package_SrvTransform"))
    (:file "_package_SrvTransform" :depends-on ("_package"))
  ))