/*
 Stepper Motor Control - one revolution

 This program drives a unipolar or bipolar stepper motor.
 The motor is attached to digital pins 8 - 11 of the Arduino.

 The motor should revolve one revolution in one direction, then
 one revolution in the other direction.


 Created 11 Mar. 2007
 Modified 30 Nov. 2009
 by Tom Igoe

 */

#include <Stepper.h>
#include <Arduino.h>

const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution
// for your motor

// initialize the Stepper library on pins 8 through 11:
// Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);
Stepper myStepper(stepsPerRevolution, PC12, PC13, PB12, PB2);

void setup() {
  // set the speed at 60 rpm:
  myStepper.setSpeed(18);
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() {
  // step one revolution in one direction:
  //Serial.println("clockwise");
  myStepper.step(stepsPerRevolution);
  

  
}
