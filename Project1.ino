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


// If dan Else
int led1 = 11;
int led2 = 12;
int led3 = 13;
int pb1 = 2;
int pb2 = 3;
void setup() {
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(pb1, INPUT);
pinMode(pb2, INPUT);
}

void loop() {
if (digitalRead(pb1) == 1 && digitalRead(pb2) == 1) {
digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);
digitalWrite(led3, HIGH);
}
else if (digitalRead(pb1) == 1) {
digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
}
else if (digitalRead(pb2) == 1) {
digitalWrite(led1, LOW);
digitalWrite(led2, HIGH);
digitalWrite(led3, LOW);
}else {
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led3, HIGH);
}

}

//Swich dan Case
int i = 0;
int led1 = 11;
int led2 = 12;
int led3 = 13;
int pb1 = 2;
int pb2 = 3;
int pbkiri;
int pbkanan;
void setup() {
  Serial.begin(9600);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(pb1, INPUT);
pinMode(pb2, INPUT);
}

void loop() {
pbkiri = digitalRead(pb1);
if (pbkiri == 1) {
  i++;
  delay(300);
}
pbkanan = digitalRead(pb2);
if (pbkanan == 1) {
  i--;
  delay(300);
} 

switch (i) {
  case 1:
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  break;
  case 2:
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
break;
case 3:
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  break;
  default:
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  break;
}
Serial.println(i);
}

int led1 = 11;
int led2 = 12;
int led3 = 13;
void setup() {
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
}

//For Loop
void loop() 
for (int i=0; i<=5; i++) { //6
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);
  delay(1000);
}
for (int i=0; i<=3; i++) { //4
  digitalWrite(led2, HIGH);
  delay(1000);
  digitalWrite(led2, LOW);
  delay(1000);
}
for (int i=0; i<=2; i++) { //3
  digitalWrite(led3, HIGH);
  delay(1000);
  digitalWrite(led3, LOW);
  delay(1000);
}

//While Loop
int i = 0;
while (i <= 5) { //6
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);
  delay(1000);
  i++;
}
int j = 0;
while (j <= 3) { //4
  digitalWrite(led2, HIGH);
  delay(1000);
  digitalWrite(led2, LOW);
  delay(1000);
  j++;
}
int x = 0;
while (x <= 2) { //3
  digitalWrite(led3, HIGH);
  delay(1000);
  digitalWrite(led3, LOW);
  delay(1000);
  x++;
}

//Tantangan Semakin lama ke cepat dan Semakin cepat ke lama
int m = 2000;
while(m >= 10) {
digitalWrite(led1, HIGH);
delay(m);
digitalWrite(led1, LOW);
delay(m);
m = m-200;
}
int n = 10;
while(n <= 2000) {
digitalWrite(led2, HIGH);
delay(n);
digitalWrite(led2, LOW);
delay(n);
n = n+200;
}

int led1 = 11;
int led2 = 12;
int led3 = 13;
void setup() {
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
}
void loop() {
kedip(1, 5, led1, 1000, 500);
kedip(1, 3, led2, 1500, 800);
kedip(1, 2, led3, 1500, 500);
}

//Function dan For Loop
void kedip(int batasBawah, int batasAtas, int led, int lamaHidup,
int lamaMati) {
  for (int i = batasBawah; i <= batasAtas; i++) {
digitalWrite(led, HIGH);
delay(lamaHidup);
digitalWrite(led, LOW);
delay(lamaMati);
  }
}

//Function dan While Loop
void kedip(int batasBawah, int batasAtas, int led, int lama) {
while (batasBawah <= batasAtas) {
digitalWrite(led, HIGH);
delay(lama);
digitalWrite(led, LOW);
delay(lama);
batasBawah++;
}
}

//Function dari lama ke cepat dan cepat ke lama
void loop() {
lamakeCepat(led1, 2000, 200);
cepatkeLama(led2, 2000, 200);
}

void lamakeCepat(int led, int lama, int kurang) {
  while (lama >= 10) {
    digitalWrite(led, HIGH);
    delay(lama);
    digitalWrite(led, LOW);
    delay(lama);
    lama = lama - kurang;
  }
}
void cepatkeLama(int led, int lamaMaksimal, int tambah) {
  int tambah1 = 10;
  while (tambah1 <= lamaMaksimal) {
    digitalWrite(led, HIGH);
    delay(tambah1);
    digitalWrite(led, LOW);
    delay(tambah1);
tambah1 = tambah1 + tambah;
  }
}
