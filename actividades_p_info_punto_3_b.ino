int pinBoton = 2;
int pinPot = A0;
int pinR = 11;
int pinV = 10;
int pinA = 9;

bool encendido = false;
int ultimoEstadoBoton = LOW;

void setup() {
  pinMode(pinBoton, INPUT);
  pinMode(pinR, OUTPUT);
  pinMode(pinV, OUTPUT);
  pinMode(pinA, OUTPUT);
}

void loop() {
  int estadoBoton = digitalRead(pinBoton);

  if (estadoBoton == HIGH && ultimoEstadoBoton == LOW) {
    encendido = !encendido;
    delay(50); 
  }
  ultimoEstadoBoton = estadoBoton;

  if (encendido) {
    int val = analogRead(pinPot);

    int r = 0, v = 0, a = 0;

    if (val <= 512) {
      r = map(val, 0, 512, 255, 0);
    } else {
      r = 0;
    }

    if (val <= 512) {
      v = map(val, 0, 512, 0, 255);
    } else {
      v = map(val, 513, 1023, 255, 0);
    }

    if (val > 512) {
      a = map(val, 513, 1023, 0, 255);
    } else {
      a = 0;
    }

    analogWrite(pinR, r);
    analogWrite(pinV, v);
    analogWrite(pinA, a);
  } else {
    analogWrite(pinR, 0);
    analogWrite(pinV, 0);
    analogWrite(pinA, 0);
  }
}
