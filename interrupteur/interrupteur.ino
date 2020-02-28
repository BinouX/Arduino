int pinButton = 2;
int pinLed1 = 4;
boolean powerLed1 = false;
void setup() {
  // put your setup code here, to run once:
  pinMode(pinButton, INPUT_PULLUP);
  pinMode(pinLed1, OUTPUT);

  digitalWrite(pinLed1, powerLed1);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinLed1, powerLed1);
  
  if(!digitalRead(pinButton)){
     powerLed1 = !powerLed1;
  }
  
  delay(1000);
}
