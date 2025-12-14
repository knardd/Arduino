#include <Servo.h>
Servo servo;

int pb1 = 2;
int pb2 = 3;
int pbServo = 9;
int angle = 90;
int led1 = 4;
int led2 = 5;

void setup() {
 Serial.begin(9600);
 pinMode(pb1, INPUT_PULLUP);
 pinMode(pb2, INPUT_PULLUP);
 servo.attach(pbServo);
 servo.write(angle);
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
}

void loop() {
 if (digitalRead(pb1) == LOW && angle < 180) {
//    for (int angle = 0; angle<=180; angle++) {
     angle++;
     servo.write(angle);
     delay(15);
     Serial.println(angle);
     digitalWrite(led1, HIGH);
     digitalWrite(led2, LOW);
//    
 }
 if (digitalRead(pb2) == LOW && angle > 0) {
//    for (int angle= 180; angle>=0; angle--) {
     angle--;
     servo.write(angle);
     delay(15);
     Serial.println(angle);
     digitalWrite(led2, HIGH);
     digitalWrite(led1, LOW);
//    }
 }
}
