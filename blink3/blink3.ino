//int pinLed1 = 2;
//int pinLed2 = 5;
//int pinLed3 = 6;

int pinLed[3] = {2,5,6};

void setup() {
  // put your setup code here, to run once:
//  pinMode(pinLed1, OUTPUT);
//  pinMode(pinLed2, OUTPUT);
//  pinMode(pinLed3, OUTPUT);
//
//  digitalWrite(pinLed1,HIGH); // on passe le pin à +5V
//  digitalWrite(pinLed2,HIGH);
//  digitalWrite(pinLed3,HIGH);

  for(int pin = 0; pin < 3; pin++){
    pinMode(pinLed[pin],OUTPUT);
    digitalWrite(pinLed[pin], HIGH);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
//    digitalWrite(pinLed1,LOW); // on passe le pin à +5V
//    digitalWrite(pinLed2,LOW); // on passe le pin à +5V
//    digitalWrite(pinLed3,LOW); // on passe le pin à +5V
//    delay (1000);
//
//    digitalWrite(pinLed1,HIGH);
//    digitalWrite(pinLed2,HIGH);
//    digitalWrite(pinLed3,HIGH);
//    delay (100);
//
//  for(int temps = 1000 ;temps >= 200; temps -= 200)
//  {
//    digitalWrite(pinLed1, LOW);
//    delay(temps);
//    digitalWrite(pinLed1, HIGH);
//
//    digitalWrite(pinLed2, LOW);
//    delay(temps);
//    digitalWrite(pinLed2, HIGH);
//
//    digitalWrite(pinLed3, LOW);
//    delay(temps);
//    digitalWrite(pinLed3, HIGH);
//  }

  for( int i=0; i<3; i++) {
    digitalWrite(pinLed[i], LOW);
  }
  delay(1000);

  
  for( int i=0; i<3; i++) {
    digitalWrite(pinLed[i], HIGH);
  }
  delay(100);

  for(int temps = 1000 ;temps >= 200; temps -= 200){
    for(int i=0; i<3; i++){
      digitalWrite(pinLed[i], LOW);
      delay(temps);
      digitalWrite(pinLed[i], HIGH);
      delay(100);
    }
  }
}
