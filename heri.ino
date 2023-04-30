 #include <Wire.h>  // library for I2C protocol  
 #include <LiquidCrystal_I2C.h> // library for I2C LCD  
 LiquidCrystal_I2C lcd(0x27,16,2); // set the LCD address to 0x27 for a 16 chars and 2 line display  
 void setup()  
 {  
  lcd.init();    // initialize the lcd   
  lcd.backlight(); // backlight ON  
  lcd.print("Hai Heri!");  
  lcd.setCursor(2,1);  
  lcd.print("Semangat Ya");  
 }  
 void loop()  
 {  
 }
