#pragma once

/*
 * The Actuator class is an abstracted class that encompasses
 * DC motors, brushless motors, limit servos, and continuous servos.
 * What "value" represents depends on the actuator type:
 *
 *      Actuator Type       Value
 *      ------------------------------
 *      DC Motor            Speed
 *      Brushless Motor     ???
 *      Limit Servo         Position
 *      Continuous Servo    Speed
 */

class Actuator {
 public:
  Actuator()          = default;
  virtual ~Actuator() = default;

  virtual void setValue(float value) {}

  virtual float getValue() {
    return -1;
  }
};
