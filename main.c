/*
Created by: Osamah
Created on: Mar 2025
servo change angle
*/

#include <Servo.h>

Servo servoNumber1 ;
int servostop = 1000;
int angleone = 0;
int angletwo = 90;
int anglethree = 180;

void setup() {
  //setup pins
  servoNumber1.attach(2);
  servoNumber1.write(0);
}

void loop() {
  servoNumber1.write(angletwo);
  delay(servostop);
  servoNumber1.write(angleone);
  delay(servostop);
  servoNumber1.write(anglethree);
  delay(servostop);
  servoNumber1.write(angleone);
  delay(servostop);
}