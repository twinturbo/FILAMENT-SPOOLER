#include <SpeedyStepper.h>


//PIN:  21   Port: C5        X_DIR_PIN  
//PIN:  15   Port: D7        X_STEP_PIN       protected
//PIN:  14   Port: D6        E0_ENABLE_PIN    protected
//  .                          X_ENABLE_PIN     protected
//  .                          Y_ENABLE_PIN     protected

const int MOTOR_X_STEP_PIN = 2; // 15 22 3
const int MOTOR_X_DIRECTION_PIN = 5; // 21 23 2
//const int MOTOR_Y_STEP_PIN = 3; // 15 22 3
//const int MOTOR_Y_DIRECTION_PIN = 6; // 21 23 2


const int MOTOR_ENABLE = 8;

SpeedyStepper stepperX;
//SpeedyStepper stepperY;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  stepperX.connectToPins(MOTOR_X_STEP_PIN, MOTOR_X_DIRECTION_PIN);
  //stepperY.connectToPins(MOTOR_Y_STEP_PIN, MOTOR_Y_DIRECTION_PIN);
  pinMode(MOTOR_ENABLE, OUTPUT);
  digitalWrite(MOTOR_ENABLE, LOW);
  
}
void loop() {
  stepperX.setSpeedInStepsPerSecond(2000);
  stepperX.setAccelerationInStepsPerSecondPerSecond(500);
  
  //stepperY.setSpeedInStepsPerSecond(1200);
  //stepperY.setAccelerationInStepsPerSecondPerSecond(4000);
  
  for ( int steps = 0 ; steps <= 5; steps++ ){  
  stepperX.moveRelativeInSteps(1000);
  //stepperY.moveRelativeInSteps(50);
  }
  for ( int steps = 0 ; steps <= 5; steps++ ){  
  stepperX.moveRelativeInSteps(10000);
  //stepperY.moveRelativeInSteps(-50);
  }
  
  //delay(1000);
}
