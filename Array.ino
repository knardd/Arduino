//Array
int led[5] = {8, 9, 10, 11, 12};
void setup() {
for (int i=0; i<=4; i++) {
  pinMode(led[i], OUTPUT);
}
}

void loop() {
for(int i=0; i<=4; i++) {
  digitalWrite(led[i], HIGH);
  delay(1000);
  digitalWrite(led[i], LOW);
  delay(1000);
}
for(int i=4; i>=0; i--) {
  digitalWrite(led[i], HIGH);
  delay(1000);
  digitalWrite(led[i], LOW);
  delay(1000);
}
}
