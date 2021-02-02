#include <Arduino.h>
#include "twoWheeledRobot.h"
#include "constants.h"

//for UNO
//A4 -- SDA
//A5 -- SCL


double dt = 50;


void setup() {
  Serial.begin(9600);
  TwoWheeledRobot robot;
  robot.createWheels(WHEEL_RADIUS, BASE_LENGTH, MAX_VELOCITY);
  
  robot.setEncoderPins(ENCODER_PIN_L, ENCODER_PIN_R);
  robot.setDriverPins(DRIVER_IN_A1, DRIVER_IN_A2, DRIVER_IN_B1, DRIVER_IN_B2, DRIVER_PWM_PIN_A, DRIVER_PWM_PIN_B);
  robot.tunePID(0.06, 0.02, 0);
  
  robot.goToGoal(1, 1, dt);
}



void loop() {
}



// void debug (String name_debug, float val ) {
//   Serial.print(name_debug);
//   Serial.println(val);
// }