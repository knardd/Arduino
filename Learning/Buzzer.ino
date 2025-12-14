int buzz = 8;
int pb = 3;

void setup() {
 pinMode(buzz, OUTPUT);
 pinMode(pb, INPUT_PULLUP);
}

void loop() {
 if(digitalRead(pb) == LOW) {
   digitalWrite(buzz, HIGH);  
 }else {
   digitalWrite(buzz, LOW);
 }
 }

// void loop() {
//  digitalWrite(buzz, HIGH);
//  delay(1000);
//  digitalWrite(buzz, LOW);
//  delay(300);

//  digitalWrite(buzz, HIGH);
//  delay(300);
//  digitalWrite(buzz, LOW);
//  delay(500);
// }



