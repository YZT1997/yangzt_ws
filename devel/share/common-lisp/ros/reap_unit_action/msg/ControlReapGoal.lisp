; Auto-generated. Do not edit!


(cl:in-package reap_unit_action-msg)


;//! \htmlinclude ControlReapGoal.msg.html

(cl:defclass <ControlReapGoal> (roslisp-msg-protocol:ros-message)
  ((dishwasher_id
    :reader dishwasher_id
    :initarg :dishwasher_id
    :type cl:integer
    :initform 0)
   (target_speed
    :reader target_speed
    :initarg :target_speed
    :type cl:integer
    :initform 0))
)

(cl:defclass ControlReapGoal (<ControlReapGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ControlReapGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ControlReapGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name reap_unit_action-msg:<ControlReapGoal> is deprecated: use reap_unit_action-msg:ControlReapGoal instead.")))

(cl:ensure-generic-function 'dishwasher_id-val :lambda-list '(m))
(cl:defmethod dishwasher_id-val ((m <ControlReapGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader reap_unit_action-msg:dishwasher_id-val is deprecated.  Use reap_unit_action-msg:dishwasher_id instead.")
  (dishwasher_id m))

(cl:ensure-generic-function 'target_speed-val :lambda-list '(m))
(cl:defmethod target_speed-val ((m <ControlReapGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader reap_unit_action-msg:target_speed-val is deprecated.  Use reap_unit_action-msg:target_speed instead.")
  (target_speed m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ControlReapGoal>) ostream)
  "Serializes a message object of type '<ControlReapGoal>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'dishwasher_id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'dishwasher_id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'dishwasher_id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'dishwasher_id)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'target_speed)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'target_speed)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'target_speed)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'target_speed)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ControlReapGoal>) istream)
  "Deserializes a message object of type '<ControlReapGoal>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'dishwasher_id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'dishwasher_id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'dishwasher_id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'dishwasher_id)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'target_speed)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'target_speed)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'target_speed)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'target_speed)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ControlReapGoal>)))
  "Returns string type for a message object of type '<ControlReapGoal>"
  "reap_unit_action/ControlReapGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ControlReapGoal)))
  "Returns string type for a message object of type 'ControlReapGoal"
  "reap_unit_action/ControlReapGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ControlReapGoal>)))
  "Returns md5sum for a message object of type '<ControlReapGoal>"
  "387286c6496ed104d896e0772e459e70")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ControlReapGoal)))
  "Returns md5sum for a message object of type 'ControlReapGoal"
  "387286c6496ed104d896e0772e459e70")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ControlReapGoal>)))
  "Returns full string definition for message of type '<ControlReapGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Define the goal~%uint32 dishwasher_id  # Specify which dishwasher we want to use~%uint32 target_speed  # Target speed~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ControlReapGoal)))
  "Returns full string definition for message of type 'ControlReapGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Define the goal~%uint32 dishwasher_id  # Specify which dishwasher we want to use~%uint32 target_speed  # Target speed~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ControlReapGoal>))
  (cl:+ 0
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ControlReapGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'ControlReapGoal
    (cl:cons ':dishwasher_id (dishwasher_id msg))
    (cl:cons ':target_speed (target_speed msg))
))
