void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
}

void loop() {
  for (int t = 600; t < 1200; t++) {
    tone(3, t);
    digitalWrite(2, HIGH);
    digitalWrite(4, LOW);
    delay(2);
  }

  for (int t = 1200; t > 600; t--) {
    tone(3, t);
    digitalWrite(2, LOW);
    digitalWrite(4, HIGH);
    delay(2);
  }
}