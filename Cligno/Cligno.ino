int pinPot=0; //variable pour définir le CAN où est connecté le potentiomètre
int valPot=0; //variable pour récupérer la tension aux bornes du potentiomètre traduite par le CAN . On l’initialise à 0.
int pinLed=8;

void setup() {
    Serial.begin(9600); //Initialisation de la communication avec la console

  pinMode(pinLed, OUTPUT);
  digitalWrite(pinLed, LOW);
}

void loop() {
  valPot=analogRead(A0); //lit la tension, la convertit en valeur numérique et la stocke dans valeurPot
//  if(valPot<=204){
//    cligno(100);
//  } else if(valPot>204 && valPot<=408) {
//    cligno(125);
//  } else if(valPot>408 && valPot<=613) {
//    cligno(167);
//  } else if(valPot>613 && valPot<=818) {
//    cligno(250);
//  } else {
//    cligno(500);
//  }

  Serial.println(valPot);
//  int timeWait = map(valPot, 0, 1023, 1, 5);
//  cligno(1000/timeWait/2);
}

void cligno(int wait) {
  digitalWrite(pinLed,HIGH);
  delay(wait);
  digitalWrite(pinLed,LOW);
  delay(wait);
}
