#include <Wire.h>
#include "TM1637.h"
#include "rgb_lcd.h"

const int CLK = 3;
const int DIO = 2;
const int TP = A0;

TM1637 tm1637(CLK,DIO);

rgb_lcd lcd;

const int colorR = 255;
const int colorG = 0;
const int colorB = 0;

void setup()
{
    Serial.begin(9600);
    tm1637.init();
    tm1637.set(BRIGHT_TYPICAL);

    lcd.begin(16, 2);
    lcd.setRGB(colorR, colorG, colorB);
    lcd.setCursor(0, 0);
    lcd.print("Bus de terrain 1");

    delay(2000);
}

void loop()
{
    uint16_t val;
    double dat;
    val=analogRead(TP);//Connect LM35 on Analog 0
    dat = (double) val * (5/10.24); 
    Serial.print("Tep:"); //Display the temperature on Serial monitor
    Serial.print(dat);
    Serial.println("C");

     lcd.setCursor(0, 1);
     lcd.print("Tep:");
     lcd.setCursor(4, 1);
     lcd.print("dat");
     lcd.setCursor(8, 1);
     lcd.print("C");
     
     tm1637.displayNum(dat);
}


