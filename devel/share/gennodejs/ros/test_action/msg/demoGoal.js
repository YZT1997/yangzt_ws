// Auto-generated. Do not edit!

// (in-package test_action.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class demoGoal {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.numGoal = null;
    }
    else {
      if (initObj.hasOwnProperty('numGoal')) {
        this.numGoal = initObj.numGoal
      }
      else {
        this.numGoal = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type demoGoal
    // Serialize message field [numGoal]
    bufferOffset = _serializer.uint32(obj.numGoal, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type demoGoal
    let len;
    let data = new demoGoal(null);
    // Deserialize message field [numGoal]
    data.numGoal = _deserializer.uint32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'test_action/demoGoal';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '32faa7c496e5a280a740c4602ed88a0f';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # Define the goal
    uint32 numGoal
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new demoGoal(null);
    if (msg.numGoal !== undefined) {
      resolved.numGoal = msg.numGoal;
    }
    else {
      resolved.numGoal = 0
    }

    return resolved;
    }
};

module.exports = demoGoal;
