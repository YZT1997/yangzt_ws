; Auto-generated. Do not edit!


(cl:in-package reap_unit_action-msg)


;//! \htmlinclude ControlReapFeedback.msg.html

(cl:defclass <ControlReapFeedback> (roslisp-msg-protocol:ros-message)
  ((percent_complete
    :reader percent_complete
    :initarg :percent_complete
    :type cl:integer
    :initform 0))
)

(cl:defclass ControlReapFeedback (<ControlReapFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ControlReapFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ControlReapFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name reap_unit_action-msg:<ControlReapFeedback> is deprecated: use reap_unit_action-msg:ControlReapFeedback instead.")))

(cl:ensure-generic-function 'percent_complete-val :lambda-list '(m))
(cl:defmethod percent_complete-val ((m <ControlReapFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader reap_unit_action-msg:percent_complete-val is deprecated.  Use reap_unit_action-msg:percent_complete instead.")
  (percent_complete m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ControlReapFeedback>) ostream)
  "Serializes a message object of type '<ControlReapFeedback>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'percent_complete)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'percent_complete)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'percent_complete)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'percent_complete)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ControlReapFeedback>) istream)
  "Deserializes a message object of type '<ControlReapFeedback>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'percent_complete)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'percent_complete)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'percent_complete)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'percent_complete)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ControlReapFeedback>)))
  "Returns string type for a message object of type '<ControlReapFeedback>"
  "reap_unit_action/ControlReapFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ControlReapFeedback)))
  "Returns string type for a message object of type 'ControlReapFeedback"
  "reap_unit_action/ControlReapFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ControlReapFeedback>)))
  "Returns md5sum for a message object of type '<ControlReapFeedback>"
  "c483d54fce63a45a8685bf35cceea187")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ControlReapFeedback)))
  "Returns md5sum for a message object of type 'ControlReapFeedback"
  "c483d54fce63a45a8685bf35cceea187")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ControlReapFeedback>)))
  "Returns full string definition for message of type '<ControlReapFeedback>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Define a feedback message~%uint32 percent_complete~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ControlReapFeedback)))
  "Returns full string definition for message of type 'ControlReapFeedback"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Define a feedback message~%uint32 percent_complete~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ControlReapFeedback>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ControlReapFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'ControlReapFeedback
    (cl:cons ':percent_complete (percent_complete msg))
))
