const int pinled = 13;
void setup() {
Serial.begin(9600);//kecepatan komunikasi antara Arduino dan komputer
pinMode(pinled, OUTPUT);//digunakan untuk mengirimkan sinyal
Serial.println("Progam siap dimulai");
}

void loop() {
digitalWrite(pinled, HIGH);//mengatur status(nyala atau mati), High nyala
Serial.println("Led sudah menyala");
delay(3000);//led nyala selama 3 detik
digitalWrite(pinled, LOW);//Low mati
Serial.println("Led sudah mati");
delay(3000);//led mati selama 3 detik
//13 sebagai output listrik positif lalu led menyala lalu listrik
//negatif ke resistor agar tegangannya stabil dan listrik negatif
//dikembalikan ke GND/Ground
}


const int pb = 3;
void setup() {
Serial.begin(9600);
pinMode(pb, INPUT);
}

void loop() {
Serial.println(digitalRead(pb));
delay(1000);
}


//Ketika Pushbutton di pencet maka Led akan menyala
int pb = 3;
int pinled = 13;
int button = 0;
void setup() {
pinMode(pb, INPUT);
pinMode(pinled, OUTPUT);
}

void loop() {
  button = digitalRead(pb);
  if (button == HIGH) {
    digitalWrite(pinled, HIGH);
  }else {
  digitalWrite(pinled, LOW);
  }
}


//Ketika 2 Pushbotton di tekan maka Led hijau akan menyala &&
int led1 = 11;
int led2 = 12;
int led3 = 13;
int pb1 = 2;
int pb2 = 3;
void setup() {
pinMode(led1,OUTPUT );
pinMode(led2,OUTPUT );
pinMode(led3,OUTPUT );
pinMode(pb1,INPUT );
pinMode(pb2,INPUT );
}

void loop() {
if (digitalRead(pb1) == 1 && digitalRead(pb2) == 0) {
  digitalWrite(led1, HIGH);
}else {
  digitalWrite(led1, LOW);
}
if (digitalRead(pb1) == 0 && digitalRead(pb2) == 1) {
  digitalWrite(led2, HIGH);
}else {
  digitalWrite(led2, LOW);
}
if (digitalRead(pb1) == 1 && digitalRead(pb2) == 1) {
  digitalWrite(led3, HIGH);
}else {
  digitalWrite(led3, LOW);
}
}

