int pinLed[5] = {2, 4, 5 ,6 , 7};

void setup() {
  // put your setup code here, to run once:
  for(int pin =0; pin < 5; pin++){
    pinMode(pinLed[pin], OUTPUT);
    digitalWrite(pinLed[pin], HIGH);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  oneByOneLeftToRigh(HIGH);
  delay(1000);

  oneByOneRighToLeft(LOW);
  delay(1000);

  oneByOneRighToLeft(HIGH);
  delay(1000);

  oneByOneLeftToRigh(LOW);
  delay(1000);
}

void oneByOneLeftToRigh(int value){
  for(int pin=0; pin<5; pin++) {
    digitalWrite(pinLed[pin], value);
    delay(500);
  }
}

void oneByOneRighToLeft(int value){
  for(int pin=4; pin>=0; pin--) {
    digitalWrite(pinLed[pin], value);
    delay(500);
  }
}
