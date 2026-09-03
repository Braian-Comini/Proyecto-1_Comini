int pinBoton = 2;
int pinPot = A0;
int leds[] = {3, 4, 5, 6, 7, 8, 9};

bool activo = false;
int ultimoEstadoBoton = LOW;

void setup() {
  pinMode(pinBoton, INPUT);
  for (int i = 0; i < 7; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  int lecturaBoton = digitalRead(pinBoton);
  
  if (lecturaBoton == HIGH && ultimoEstadoBoton == LOW) {
    activo = !activo;
    delay(50);
  }
  ultimoEstadoBoton = lecturaBoton;

  if (activo) {
    ejecutarSecuencia();
  } else {
    apagarTodo();
  }
}

void ejecutarSecuencia() {
  int pinesGrupo[] = {3, 4, 5, 6, 8}; // Pines principales de cada LED
  
  for (int i = 0; i < 5; i++) {
    int velocidad = map(analogRead(pinPot), 0, 1023, 50, 1000);
    
    if (i == 3) { digitalWrite(6, HIGH); digitalWrite(7, HIGH); }
    else if (i == 4) { digitalWrite(8, HIGH); digitalWrite(9, HIGH); }
    else { digitalWrite(pinesGrupo[i], HIGH); }
    
    delay(velocidad);
    apagarTodo();
    
    if (digitalRead(pinBoton) == HIGH) break;
  }
}

void apagarTodo() {
  for (int i = 0; i < 7; i++) {
    digitalWrite(leds[i], LOW);
  }
}