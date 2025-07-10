#include <LiquidCrystal_I2C.h>

int kolom = 16;
int baris = 2;

LiquidCrystal_I2C lcd(0x27, kolom, baris);

void setup() {
lcd.init();
lcd.backlight();
}

void loop() {
lcd.setCursor (0,0);
lcd.print("Selamat Datang");
lcd.setCursor (0,1);
lcd.print("Selamat Malam");
for(int i=0; i<16; i++) {
  lcd.scrollDisplayLeft();
  delay(200);
}
}

#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
int pbkiri = 2;

void setup() {
lcd.init();
lcd.backlight();
pinMode(pbkiri, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(pbkiri) == LOW) {
lcd.setCursor(0,0);
// lcd.print("Selamat Pagi");
// for (int i = 0; i < 16; i++) {
//   lcd.scrollDisplayLeft();
//   delay(1000);
}
  }
// lcd.setCursor(0,1);
// lcd.print("Selamat Beraktivitas");
// }

