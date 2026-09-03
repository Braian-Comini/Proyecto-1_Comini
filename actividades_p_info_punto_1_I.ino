int pinesLeds[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
int pinBoton = 12;
int indiceLed = 0;

void setup() {
  for (int i = 0; i < 10; i++) {
    pinMode(pinesLeds[i], OUTPUT);
  }
  pinMode(pinBoton, INPUT);
}

void loop() {
  if (digitalRead(pinBoton) == LOW) {
    for (int i = 0; i < 10; i++) {
      digitalWrite(pinesLeds[i], LOW);
    }
    
    digitalWrite(pinesLeds[indiceLed], HIGH);
    
    delay(150);
    
    indiceLed++;
    
    if (indiceLed >= 10) {
      indiceLed = 0;
    }
  }
}
