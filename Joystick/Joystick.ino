//Ceci est un code pour utiliser avec le module Joystick
//Ici on visualise seulement la sortie analogique du pin de l'axe X sur le moniteur
//SurtrTech.com pour plus d'infos

int XAxis = 0; //Le pin analogique  ou la sortie est connecté ici A0
int YAxis = 1;
int ButtonPin = 2;

void setup() {
  Serial.begin(9600); //Lancement du moniteur serie
  pinMode(XAxis, INPUT); //Le mode de ce pin qui est une entrée
  pinMode(YAxis, INPUT);
  pinMode (ButtonPin,INPUT);
}

void loop() {
  int x = analogRead(XAxis);
  int y = analogRead(YAxis);
  int push = digitalRead(ButtonPin);

  Serial.print("Axe x :"); Serial.print(x);
  Serial.print(" / Axe y :"); Serial.print(y);
  Serial.print(" / Push :"); Serial.println(push);
}
