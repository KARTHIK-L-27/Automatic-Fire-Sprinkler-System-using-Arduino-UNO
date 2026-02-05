int fireSensor = A0;
int relay = 7;
int led = 8;
int buzzer = 9;

void setup() {
  pinMode(relay, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(fireSensor);
  Serial.println(value);

  if (value < 400) {   // Fire detected (adjust threshold)
    digitalWrite(relay, HIGH);  // Sprinkler ON
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(relay, LOW);   // Sprinkler OFF
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
  }

  delay(500);
}
