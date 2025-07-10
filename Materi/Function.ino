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
