;; Auto-generated. Do not edit!


(when (boundp 'reap_unit_action::ControlReapFeedback)
  (if (not (find-package "REAP_UNIT_ACTION"))
    (make-package "REAP_UNIT_ACTION"))
  (shadow 'ControlReapFeedback (find-package "REAP_UNIT_ACTION")))
(unless (find-package "REAP_UNIT_ACTION::CONTROLREAPFEEDBACK")
  (make-package "REAP_UNIT_ACTION::CONTROLREAPFEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude ControlReapFeedback.msg.html


(defclass reap_unit_action::ControlReapFeedback
  :super ros::object
  :slots (_percent_complete ))

(defmethod reap_unit_action::ControlReapFeedback
  (:init
   (&key
    ((:percent_complete __percent_complete) 0)
    )
   (send-super :init)
   (setq _percent_complete (round __percent_complete))
   self)
  (:percent_complete
   (&optional __percent_complete)
   (if __percent_complete (setq _percent_complete __percent_complete)) _percent_complete)
  (:serialization-length
   ()
   (+
    ;; uint32 _percent_complete
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint32 _percent_complete
       (write-long _percent_complete s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint32 _percent_complete
     (setq _percent_complete (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get reap_unit_action::ControlReapFeedback :md5sum-) "c483d54fce63a45a8685bf35cceea187")
(setf (get reap_unit_action::ControlReapFeedback :datatype-) "reap_unit_action/ControlReapFeedback")
(setf (get reap_unit_action::ControlReapFeedback :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Define a feedback message
uint32 percent_complete


")



(provide :reap_unit_action/ControlReapFeedback "c483d54fce63a45a8685bf35cceea187")


