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
