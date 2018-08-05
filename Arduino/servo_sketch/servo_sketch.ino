/**
 * Simple Servo Example
 * 
 * Sweeps through the angles of a servo.
 * 
 * Using:
 * Tower Pro SG92R Micro Server
 * 
 * Andrew Garner
 * August 5, 2018
 */

 #include <Servo.h>

//Sero data line connected to pin 9
int servoPin = 9;

Servo servo;

void setup() {
  servo.attach(servoPin);
}

void loop() {
  int angle = 0;
  
  for (angle = 0; angle < 180; angle++) {
    servo.write(angle);
    delay(15);
  }

  for (angle = 180; angle > 0; angle--) {
    servo.write(angle);
    delay(15);
  }

}
