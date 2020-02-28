int periode=20000;
int pinServo=8;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinServo,OUTPUT);
  digitalWrite(pinServo, LOW);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int angle=0;angle<=180;angle+=20){//on fait varier l'angle de 0 à 180° par tranche de 20°
    setAngle(angle);// on appelle la fonction setAngle définie plus bas
  }
}

void setAngle(int a){
  int duree=map(a,0,179,500,2500);// on transforme l'angle en microsecondes et on stocke dans la variable duree
  digitalWrite(pinServo,LOW);//on met le pin à l'état bas
  
  // la boucle qui suit est nécessaire 
  // pour laisser le temps au servo d'aller à sa position
  for (int t=0;t<300;t++){ 
    digitalWrite(pinServo,HIGH);// on envoie l'impulsion
    delayMicroseconds(duree); // pendant la bonne durée
    digitalWrite(pinServo,LOW); // on stoppe l'impulsion
    delayMicroseconds(periode-duree); // on attend le temps restant pour atteindre la période
  }
}
