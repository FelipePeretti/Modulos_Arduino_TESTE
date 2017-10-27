  #include <LiquidCrystal_I2C.h>
  #include <Wire.h>


  LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3, POSITIVE);

  //****** PIN MAP ******
  //*  GND ---> GND     *
  //*   5V ---> 5V      *
  //*  SDA ---> A4      *
  //*  SCL ---> A5      *
  //*********************
 
  void setup(){
    lcd.begin (16,2);
  }
 
  void loop(){
    lcd.setBacklight(HIGH);
    lcd.setCursor(0,0);
    lcd.print("Felipe Peretti !!");
    lcd.setCursor(0,1);
    lcd.print("LCD e modulo I2C");
    delay(1000);
    lcd.setBacklight(LOW);
    delay(1000);
  }
