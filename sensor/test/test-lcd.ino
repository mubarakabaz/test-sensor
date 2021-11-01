#include<Arduino.h>

#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup()
{
    lcd.begin();
}

void loop()
{
    lcd.SetCursor(0, 0);
    lcd.print("Test LCD");
    lcd.SetCursor(0, 1);
    lcd.print("Hello World!!");
    lcd.SetCursor(0, 2);
    lcd.print("Test LCD lagi");
    lcd.SetCursor(0, 3);
    lcd.print("LCD Berhasil");
}