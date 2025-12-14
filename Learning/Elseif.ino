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
