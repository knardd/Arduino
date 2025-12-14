#define trigPin 9
#define echoPin 10

long duration;
int distance;

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd (0x27, 16, 2);

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
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

  lcd.setCursor(0,0);
  lcd.print("Jarak: ");
  lcd.print(distance);
  lcd.print(" Cm");
  delay(3000);
  lcd.clear();

