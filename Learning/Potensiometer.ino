#include <Servo.h>
Servo servo;

const int pin = A0;
int potValue = 0;

int pinServo = 9;
int angle = 0;

void setup() {
 Serial.begin(9600);
 servo.attach(pinServo);
}

void loop() {
 potValue = analogRead(pin);
 angle = map(potValue, 0, 1023, 0, 180);
 servo.write(angle);
 Serial.println(angle);
 delay(15);
}


