;; Auto-generated. Do not edit!


(when (boundp 'test_action::demoFeedback)
  (if (not (find-package "TEST_ACTION"))
    (make-package "TEST_ACTION"))
  (shadow 'demoFeedback (find-package "TEST_ACTION")))
(unless (find-package "TEST_ACTION::DEMOFEEDBACK")
  (make-package "TEST_ACTION::DEMOFEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude demoFeedback.msg.html


(defclass test_action::demoFeedback
  :super ros::object
  :slots (_complete_percent ))

(defmethod test_action::demoFeedback
  (:init
   (&key
    ((:complete_percent __complete_percent) 0.0)
    )
   (send-super :init)
   (setq _complete_percent (float __complete_percent))
   self)
  (:complete_percent
   (&optional __complete_percent)
   (if __complete_percent (setq _complete_percent __complete_percent)) _complete_percent)
  (:serialization-length
   ()
   (+
    ;; float32 _complete_percent
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _complete_percent
       (sys::poke _complete_percent (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _complete_percent
     (setq _complete_percent (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get test_action::demoFeedback :md5sum-) "c375bca28786480387684f5bccabc0b5")
(setf (get test_action::demoFeedback :datatype-) "test_action/demoFeedback")
(setf (get test_action::demoFeedback :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Define a feedback
float32 complete_percent

")



(provide :test_action/demoFeedback "c375bca28786480387684f5bccabc0b5")


