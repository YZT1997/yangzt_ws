; Auto-generated. Do not edit!


(cl:in-package test_action-msg)


;//! \htmlinclude demoGoal.msg.html

(cl:defclass <demoGoal> (roslisp-msg-protocol:ros-message)
  ((numGoal
    :reader numGoal
    :initarg :numGoal
    :type cl:integer
    :initform 0))
)

(cl:defclass demoGoal (<demoGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <demoGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'demoGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name test_action-msg:<demoGoal> is deprecated: use test_action-msg:demoGoal instead.")))

(cl:ensure-generic-function 'numGoal-val :lambda-list '(m))
(cl:defmethod numGoal-val ((m <demoGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader test_action-msg:numGoal-val is deprecated.  Use test_action-msg:numGoal instead.")
  (numGoal m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <demoGoal>) ostream)
  "Serializes a message object of type '<demoGoal>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'numGoal)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'numGoal)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'numGoal)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'numGoal)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <demoGoal>) istream)
  "Deserializes a message object of type '<demoGoal>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'numGoal)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'numGoal)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'numGoal)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'numGoal)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<demoGoal>)))
  "Returns string type for a message object of type '<demoGoal>"
  "test_action/demoGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'demoGoal)))
  "Returns string type for a message object of type 'demoGoal"
  "test_action/demoGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<demoGoal>)))
  "Returns md5sum for a message object of type '<demoGoal>"
  "32faa7c496e5a280a740c4602ed88a0f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'demoGoal)))
  "Returns md5sum for a message object of type 'demoGoal"
  "32faa7c496e5a280a740c4602ed88a0f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<demoGoal>)))
  "Returns full string definition for message of type '<demoGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Define the goal~%uint32 numGoal~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'demoGoal)))
  "Returns full string definition for message of type 'demoGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Define the goal~%uint32 numGoal~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <demoGoal>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <demoGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'demoGoal
    (cl:cons ':numGoal (numGoal msg))
))
