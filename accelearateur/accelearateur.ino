#include <Servo.h>

Servo servo;
int pinButton = 2;
int cumul = 0;

void setup() {
  // put your setup code here, to run once:
  servo.attach(8);
  Serial.begin(9600);
  pinMode(pinButton, INPUT);
  servo.write(90);
}

void loop() {
  // put your main code here, to run repeatedly:
    boolean etatBouton=digitalRead(pinButton);
    if(etatBouton && cumul <=1000){
      cumul++;
    } else if(cumul >=0 ) {
      cumul--;
    }
     Serial.println(etatBouton);
    int angle=map(cumul,0,1000,0,4); //on transforme en angle

    switch (angle) {
      case 1:
        servo.write(45);
        break;
      case 2:
        servo.write(90);
        break;
      case 3:
        servo.write(135);
        break;
      case 4:
        servo.write(179);
        break;
      default:
        servo.write(0);
    }

}
