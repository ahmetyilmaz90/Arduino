void setup() {
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void greenLight(){
  digitalWrite(7, HIGH);
  delay(10000); 
  digitalWrite(7, LOW);
}

void holdOn(){
  digitalWrite(6, HIGH);
  delay(3000);
  digitalWrite(6, LOW);
}

void redLight(){
  digitalWrite(5, HIGH);
  delay(10000);
  digitalWrite(5, LOW);
}

void loop() {
  greenLight();
  holdOn();
  redLight();
  holdOn();
}