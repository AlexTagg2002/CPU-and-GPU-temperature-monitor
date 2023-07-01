#include <LiquidCrystal.h>

int CPU;
int GPU;

const int RS = 11, EN = 12, D4 = 2, D5 = 3, D6 = 4, D7 = 5;
LiquidCrystal lcd(RS, EN, D4, D5, D6, D7);

void setup() {

  Serial.begin(9600);
  lcd.begin(16, 2);

}


void loop()
{
  if(Serial.available() > 0)
  {
    if(Serial.read() == 'C')
    {
      CPU = Serial.parseInt();
      if(Serial.read() == 'G')
      {
        GPU = Serial.parseInt();
        lcd.setCursor(0, 0);
        lcd.print("CPU Temp: ");
        lcd.print(CPU);
        lcd.setCursor(0, 1);
        lcd.print("GPU Temp: ");
        lcd.print(GPU);
      }
     
      }
    }
    while(Serial.available() > 0)
    {
      Serial.read();
    }
  }
