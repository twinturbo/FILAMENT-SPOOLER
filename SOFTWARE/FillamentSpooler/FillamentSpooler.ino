#include <SpeedyStepper.h>


//PIN:  21   Port: C5        X_DIR_PIN  
//PIN:  15   Port: D7        X_STEP_PIN       protected
//PIN:  14   Port: D6        E0_ENABLE_PIN    protected
//  .                          X_ENABLE_PIN     protected
//  .                          Y_ENABLE_PIN     protected

const int MOTOR_STEP_PIN = 2; // 15 22 3
const int MOTOR_DIRECTION_PIN = 5; // 21 23 2
const int SWEEP_STEP_PIN = 3; // 15 22 3
const int SWEEP_DIRECTION_PIN = 6; // 21 23 2


const int MOTOR_ENABLE = 8;

SpeedyStepper stepper;
SpeedyStepper stepper1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  stepper.connectToPins(MOTOR_STEP_PIN, MOTOR_DIRECTION_PIN);
  stepper1.connectToPins(SWEEP_STEP_PIN, SWEEP_DIRECTION_PIN);
  pinMode(MOTOR_ENABLE, OUTPUT);
  digitalWrite(MOTOR_ENABLE, LOW);
  stepper.setSpeedInStepsPerSecond(500);
  stepper.setAccelerationInStepsPerSecondPerSecond(4000);
  stepper1.setSpeedInStepsPerSecond(500);
  stepper1.setAccelerationInStepsPerSecondPerSecond(4000);}


void loop() {
  stepper.moveRelativeInSteps(50);
  stepper1.moveRelativeInSteps(5);
  stepper.moveRelativeInSteps(50);
  stepper1.moveRelativeInSteps(5);
  stepper.moveRelativeInSteps(50);
  stepper1.moveRelativeInSteps(5);
  stepper.moveRelativeInSteps(50);
  stepper1.moveRelativeInSteps(5);
  stepper.moveRelativeInSteps(50);
  stepper1.moveRelativeInSteps(-5);
  stepper.moveRelativeInSteps(50);
  stepper1.moveRelativeInSteps(-5);
  stepper.moveRelativeInSteps(50);
  stepper1.moveRelativeInSteps(-5);
  stepper.moveRelativeInSteps(50);
  stepper1.moveRelativeInSteps(-5);
  
  
  //delay(1000);
}
