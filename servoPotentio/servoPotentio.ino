#include <Servo.h>// on importe la bibliothèque
Servo servo; // on crée l'objet Servo
int pinServo=8; // on définit le pin lié à la commande du servo
int pinPotar=A0; // on définit le pin lié à la lecture du potenitomètre
void setup() {
  servo.attach(pinServo); // on relie l'objet servo au pin de commande
}

void loop() {
  int valeurPotar=analogRead(pinPotar); // lecture de la valeur du potentiomètre
  int angle=map(valeurPotar,0,1023,0,179); // tranformation en angle
  servo.write(angle); //mise en position du servo
}
