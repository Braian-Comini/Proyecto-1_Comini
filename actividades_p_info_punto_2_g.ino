int pinPot = A0;
int pinBuzzer = 9;

void setup() {
  pinMode(pinBuzzer, OUTPUT);
}

void loop() {
  int lectura = analogRead(pinPot);
  
  int frecuencia = map(lectura, 0, 1023, 100, 2000);
  
  tone(pinBuzzer, frecuencia);
}
