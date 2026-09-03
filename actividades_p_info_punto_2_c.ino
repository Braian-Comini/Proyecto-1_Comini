int pinRojo = 11;
int pinVerde = 10;
int pinAzul = 9;

int tonalidades[9][3] = {
  {0, 85, 85},    // Cian suave
  {0, 170, 170},  // Cian medio
  {0, 255, 255},  // Cian fuerte
  {85, 0, 0},     // Rojo suave
  {170, 0, 0},    // Rojo medio
  {255, 0, 0},    // Rojo fuerte
  {85, 85, 0},    // Amarillo suave
  {170, 170, 0},  // Amarillo medio
  {255, 255, 0}   // Amarillo fuerte
};

void setup() {
  pinMode(pinRojo, OUTPUT);
  pinMode(pinVerde, OUTPUT);
  pinMode(pinAzul, OUTPUT);
}

void loop() {
  for (int i = 0; i < 9; i++) {
    analogWrite(pinRojo, tonalidades[i][0]);
    analogWrite(pinVerde, tonalidades[i][1]);
    analogWrite(pinAzul, tonalidades[i][2]);
    delay(300);
  }
}
