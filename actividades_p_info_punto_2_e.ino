int pinPotR = A0;
int pinPotV = A1;
int pinPotA = A2;

int ledR = 11;
int ledV = 10;
int ledA = 9;

void setup() {
  pinMode(ledR, OUTPUT);
  pinMode(ledV, OUTPUT);
  pinMode(ledA, OUTPUT);
}

void loop() {
  int valorR = analogRead(pinPotR);
  int valorV = analogRead(pinPotV);
  int valorA = analogRead(pinPotA);

  int brilloR = map(valorR, 0, 1023, 0, 255);
  int brilloV = map(valorV, 0, 1023, 0, 255);
  int brilloA = map(valorA, 0, 1023, 0, 255);

  analogWrite(ledR, brilloR);
  analogWrite(ledV, brilloV);
  analogWrite(ledA, brilloA);
}
