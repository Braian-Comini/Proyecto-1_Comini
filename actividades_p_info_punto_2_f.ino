int pinPot = A0;
int pinLed = 13;

void setup() {
  pinMode(pinLed, OUTPUT);
}

void loop() {
  int valorPot = analogRead(pinPot);
  
  int tiempo = map(valorPot, 0, 1023, 200, 10000);

  digitalWrite(pinLed, HIGH);
  delay(tiempo);
  digitalWrite(pinLed, LOW);
  delay(tiempo);
}
