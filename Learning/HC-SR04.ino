#define trigPin 9
#define echoPin 10

long duration;
int distance;

#include <Servo.h>
Servo servo;

int ser = 7;
int angle = 0;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  servo.attach(ser);
  servo.write(angle);
}

void loop() {
  // kirim pulsa ke Trig
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // baca lama pantulan di Echo
  duration = pulseIn(echoPin, HIGH);

  // hitung jarak (dalam cm)
  distance = duration * 0.034 / 2;

  Serial.print("Jarak: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500);

  if(distance <= 10 ) {
    servo.write(90);
    delay(5000);
    servo.write(angle);
  }
}

