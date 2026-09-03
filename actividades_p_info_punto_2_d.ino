int pinPot = A0;
int r1 = 11, b1 = 10;
int r2 = 9,  v2 = 6;

void setup() {
  pinMode(r1, OUTPUT);
  pinMode(b1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(v2, OUTPUT);
}

void loop() {
  int valorPot = analogRead(pinPot);
  int velocidad = map(valorPot, 0, 1023, 50, 1000);

  analogWrite(r1, 255);
  analogWrite(b1, 255);
  analogWrite(r2, 255);
  analogWrite(v2, 255);
  delay(velocidad);

  analogWrite(r1, 0);
  analogWrite(b1, 0);
  analogWrite(r2, 0);
  analogWrite(v2, 0);
  delay(velocidad);
}
