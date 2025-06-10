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
