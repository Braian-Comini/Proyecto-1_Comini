const int pinBoton = 5;
const int pinesLeds[] = {4, 3, 2};
int estadoUltimoBoton = 0;
int indiceLed = 0;

void setup() {
  for (int i = 0; i < 3; i++) {
    pinMode(pinesLeds[i], OUTPUT);
  }
  pinMode(pinBoton, INPUT);
}

void loop() {
  int estadoBoton = digitalRead(pinBoton);

  if (estadoBoton == HIGH && estadoUltimoBoton == LOW) {
    for (int i = 0; i < 3; i++) {
      digitalWrite(pinesLeds[i], LOW);
    }
    
    digitalWrite(pinesLeds[indiceLed], HIGH);
    
    indiceLed++;
    
    if (indiceLed >= 3) {
      indiceLed = 0;
    }
    
    delay(200); 
  }
  
  estadoUltimoBoton = estadoBoton;
}
