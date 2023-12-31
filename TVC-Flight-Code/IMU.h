/*
 * Absolute Orientation Sensor BNO055
 * https://www.adafruit.com/product/4646
 * 
 * IMU = inertial measurement unit
 * 
 * Outputs the following data: angular velocity, acceleration and absolute orientation
 */

#include <Adafruit_BNO055.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>
#include <Arduino.h>
#include "VectorDefinition.h"

class IMU {
  public:
    IMU();
    Vector3 getGyros();
    Vector3 getAcceleration();
    Vector3 getOrientation();

  private:
    Adafruit_BNO055 bno = Adafruit_BNO055(-1, 0x28, &Wire1);
    sensors_event_t angVelocityData;
    sensors_event_t linearAccelerationData;
    sensors_event_t orientationData;
};
