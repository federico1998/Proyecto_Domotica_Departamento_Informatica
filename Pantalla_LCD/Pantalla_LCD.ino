#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // setea la dirección del LCD en 0x27 para un display de dos lineas de 16 caracteres

void setup()
{
  lcd.init();                      // inicializa el lcd 
  // Imprime el mensaje en el lcd
  lcd.backlight();
  lcd.setCursor(3,0);
  lcd.print("Hello, world!");
  lcd.setCursor(2,1);
}
void loop()
{

}
