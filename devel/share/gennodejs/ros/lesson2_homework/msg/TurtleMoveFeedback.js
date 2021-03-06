// Auto-generated. Do not edit!

// (in-package lesson2_homework.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class TurtleMoveFeedback {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.present_turtle_x = null;
      this.present_turtle_y = null;
      this.present_turtle_theta = null;
    }
    else {
      if (initObj.hasOwnProperty('present_turtle_x')) {
        this.present_turtle_x = initObj.present_turtle_x
      }
      else {
        this.present_turtle_x = 0.0;
      }
      if (initObj.hasOwnProperty('present_turtle_y')) {
        this.present_turtle_y = initObj.present_turtle_y
      }
      else {
        this.present_turtle_y = 0.0;
      }
      if (initObj.hasOwnProperty('present_turtle_theta')) {
        this.present_turtle_theta = initObj.present_turtle_theta
      }
      else {
        this.present_turtle_theta = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type TurtleMoveFeedback
    // Serialize message field [present_turtle_x]
    bufferOffset = _serializer.float64(obj.present_turtle_x, buffer, bufferOffset);
    // Serialize message field [present_turtle_y]
    bufferOffset = _serializer.float64(obj.present_turtle_y, buffer, bufferOffset);
    // Serialize message field [present_turtle_theta]
    bufferOffset = _serializer.float64(obj.present_turtle_theta, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type TurtleMoveFeedback
    let len;
    let data = new TurtleMoveFeedback(null);
    // Deserialize message field [present_turtle_x]
    data.present_turtle_x = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [present_turtle_y]
    data.present_turtle_y = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [present_turtle_theta]
    data.present_turtle_theta = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 24;
  }

  static datatype() {
    // Returns string type for a message object
    return 'lesson2_homework/TurtleMoveFeedback';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '4d26027f0f230cc5b61fa6b93405965c';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # Define a feedback message
    float64 present_turtle_x
    float64 present_turtle_y
    float64 present_turtle_theta
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new TurtleMoveFeedback(null);
    if (msg.present_turtle_x !== undefined) {
      resolved.present_turtle_x = msg.present_turtle_x;
    }
    else {
      resolved.present_turtle_x = 0.0
    }

    if (msg.present_turtle_y !== undefined) {
      resolved.present_turtle_y = msg.present_turtle_y;
    }
    else {
      resolved.present_turtle_y = 0.0
    }

    if (msg.present_turtle_theta !== undefined) {
      resolved.present_turtle_theta = msg.present_turtle_theta;
    }
    else {
      resolved.present_turtle_theta = 0.0
    }

    return resolved;
    }
};

module.exports = TurtleMoveFeedback;
