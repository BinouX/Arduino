int pinButton = 2;
int pinLed1 = 4;
int pinLed2 = 6;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinButton, INPUT);
  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);

  digitalWrite(pinLed1, LOW);
  digitalWrite(pinLed2, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

  if(!digitalRead(pinButton)){
    digitalWrite(pinLed1, HIGH);
    digitalWrite(pinLed2, LOW);
  } else {
    digitalWrite(pinLed1, LOW);
    digitalWrite(pinLed2, HIGH);
  }
}
