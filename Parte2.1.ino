#include <GFButton.h>
 
int pinBotonON = 8;
int pinBotonOFF = 9;
 
GFButton boton1(pinBotonON);
GFButton boton2(pinBotonOFF);
 
void setup() {
  pinMode(pinBotonON, INPUT);
  pinMode(pinBotonOFF, INPUT);
  boton1.setPressHandler(botonON_pulsado);
  boton2.setPressHandler(botonOFF_pulsado);
  Serial.begin(9600);
}
 
void loop() 
{
  boton1.process();
  boton2.process();
}
 
void botonON_pulsado(GFButton & btn)
{
  Serial.print("LEDON_");
}
void botonOFF_pulsado(GFButton & btn)
{
  Serial.print("LEDOFF_");
}
