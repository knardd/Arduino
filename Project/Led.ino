int led = 8;
int led1 = 9;
int led2 = 10;
int led3 = 11;
int pb = 2;
int i = 0;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(pb, INPUT_PULLUP);
}
void loop() {
if (digitalRead(pb) == 1) {
  i++;
}
switch(i) {
  case 1 :
  digitalWrite(led, HIGH);
  digitalWrite(led, LOW);
  digitalWrite(led, LOW);
  digitalWrite(led, LOW);
  break;
  case 2 :
  digitalWrite(led, LOW);
  digitalWrite(led, HIGH);
  digitalWrite(led, LOW);
  digitalWrite(led, LOW);
  break;
  case 3 :
  digitalWrite(led, LOW);
  digitalWrite(led, LOW);
  digitalWrite(led, HIGH);
  digitalWrite(led, LOW);
  break;
  case 4 :
  digitalWrite(led, LOW);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  break;
  default :
  digitalWrite(led, LOW);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  break;
}
Serial.println(i);
}
