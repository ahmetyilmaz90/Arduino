const int trigPin = 8;
const int echoPin = 12;
const int buzzerPin = 5;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034 / 2;

  Serial.print("Mesafe: ");
  Serial.print(distance);
  Serial.println(" cm");

  // 25 cm ve altı kontrolü
  if (distance > 0 && distance <= 45) { 
    digitalWrite(buzzerPin, HIGH); // Buzzer'ı çalıştır
  } else {
    digitalWrite(buzzerPin, LOW);  // Buzzer'ı sustur
  }

  delay(200); // Daha hızlı tepki için bekleme süresini düşürdük
}