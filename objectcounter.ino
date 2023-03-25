#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  
int Ir=11;
int count_value=0;
void setup()
{
                  
  lcd.init();
  lcd.backlight();
 
 pinMode(Ir,INPUT);
}


void loop()
{

  int val=digitalRead(Ir);
   
  if(val==0)
  {
    count_value++;
}

lcd.setCursor(0,0);
  lcd.print("IR_Counter");
  lcd.setCursor(0,1);
  lcd.print("IR_Count=");
  lcd.print(count_value );
   
     
 delay(1000);
}