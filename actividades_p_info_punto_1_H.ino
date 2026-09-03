int pinRojo = 11;
int pinVerde = 10;
int pinAzul = 9;
int pinBoton = 2;

int colores[7][3] = {
  {1, 0, 0}, 
  {0, 1, 1}, 
  {0, 1, 0}, 
  {1, 0, 1}, 
  {0, 0, 1}, 
  {1, 1, 1}, 
  {1, 1, 0}  
};

int indiceColor = 0;
int ultimoEstadoBoton = 0;

void setup() {
  pinMode(pinRojo, OUTPUT);
  pinMode(pinVerde, OUTPUT);
  pinMode(pinAzul, OUTPUT);
  pinMode(pinBoton, INPUT);
}

void loop() {
  int estadoBoton = digitalRead(pinBoton);

  if (estadoBoton == HIGH && ultimoEstadoBoton == LOW) {
    
    digitalWrite(pinRojo, colores[indiceColor][0]);
    digitalWrite(pinVerde, colores[indiceColor][1]);
    digitalWrite(pinAzul, colores[indiceColor][2]);

    indiceColor++;

    if (indiceColor >= 7) {
      indiceColor = 0;
    }
    
    delay(200);
  }
  
  ultimoEstadoBoton = estadoBoton;
}
