#include <Servo.h>

Servo gerak;

int pbkiri = 2;
int pbkanan = 3;
int sudut = 90; // mulai dari tengah

void setup() {
  gerak.attach(5);
  pinMode(pbkiri, INPUT);
  pinMode(pbkanan, INPUT);
  gerak.write(sudut); // posisi awal
}

void loop() {
  if (digitalRead(pbkiri) == HIGH) {
    if (sudut < 180) {
      sudut++;
      gerak.write(sudut);
      delay(10); // biar tidak terlalu cepat
    }
  }

  if (digitalRead(pbkanan) == HIGH) {
    if (sudut > 0) {
      sudut--;
      gerak.write(sudut);
      delay(10); // biar tidak terlalu cepat
    }
  }
}

#include <Servo.h>

Servo servo;

int pbkiri = 2;
int pbkanan = 3;
int sudut = 90;
void setup() {
  Serial.begin(9600);
servo.attach(5);
pinMode(2, INPUT_PULLUP); //ketika tombol ditekan maka Low jika tombol tidak ditekan maka HIGH
pinMode(3, INPUT_PULLUP);
servo.write(sudut);
}

void loop() {
if (digitalRead(pbkiri) == LOW) {
  if (sudut < 180) {
    sudut++;
    servo.write(sudut);
    delay(10);
  }
}
if (digitalRead(pbkanan) == LOW) {
  if (sudut > 0) {
    sudut--;
    servo.write(sudut);
    delay(10);
  }
}
Serial.println(sudut);
}


//Menggunakan Potensiometer digabung dengan Servo
#include <Servo.h>

Servo servo;
const int pot=A0;
int hasilPot;
int sudut;
void setup() {
Serial.begin(9600);
pinMode(pot, INPUT);
servo.attach(5);
}

void loop() {
hasilPot = analogRead(pot);
sudut = map(hasilPot,0,1023, 0, 180);//Diubah
servo.write(sudut);
Serial.println(hasilPot);
Serial.println(sudut);
Serial.println("");
}
