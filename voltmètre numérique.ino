// ajout des librairies
#include <LiquidCrystal.h>

// declaration de variables globales
int p = A0;

float value;

float tension;

void setup() 
{
  pinMode(p, INPUT);
  Serial.begin(9600); // configure l'écran en indiquant le nombre de colonne et de ligne
}
void loop()
{
  value = analogRead(A0);
  tension = (float)value * 5 / 1023;
  Serial.print("tension = "); // écris le message sur l'écran
  Serial.print(tension, 1);
  Serial.println("V");
  delay(250);
}
