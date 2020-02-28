const int CONNEXION=13;
int seven;
int count;
bool show;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  seven = 7;
  count = 14;
  show=true;
  Serial.println("*****************************");
  Serial.println("Table de multiplication");
  Serial.print("La table de : ");
  Serial.println(seven);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(show){
    for(int i=0; i <= 14; i++){
      Serial.print(i);
      Serial.print(" x ");
      Serial.print(seven);
      Serial.print(" = ");
      Serial.println(seven*i);
    }
    show=false;
    Serial.println("*****************************");
  }
  
}
