#include <Adafruit_NeoPixel.h>

#define BOTON 2
#define BUZZER 3
#define AD_DADO1 4 
#define AD_DADO2 5
#define TOTAL_LEDS 20 

Adafruit_NeoPixel dado1 = Adafruit_NeoPixel(TOTAL_LEDS, AD_DADO1, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel dado2 = Adafruit_NeoPixel(TOTAL_LEDS, AD_DADO2, NEO_GRB + NEO_KHZ800);

bool estadoBotonAnterior = HIGH;

void setup() {
  pinMode(BOTON, INPUT_PULLUP);
  pinMode(BUZZER, OUTPUT);
  Serial.begin(9600);
  
  randomSeed(analogRead(A5));

  dado1.begin();
  dado2.begin();
  dado1.show(); 
  dado2.show();
}

void loop() {
  bool estadoBotonActual = digitalRead(BOTON);

  if (estadoBotonAnterior == HIGH && estadoBotonActual == LOW) {
    delay(50); 
    ejecutarJuego();
  }
  estadoBotonAnterior = estadoBotonActual;
}

void ejecutarJuego() {
  int valorD1 = 0;
  int valorD2 = 0;

  for (int i = 0; i < 15; i++) {
    valorD1 = random(1, 7);
    valorD2 = random(1, 7);
    
    mostrarNumero(1, valorD1, 0, 0, 255); 
    mostrarNumero(2, valorD2, 0, 0, 255);
    
    delay(70 + (i * 15));
  }

  valorD1 = random(1, 7);
  valorD2 = random(1, 7);
  int suma = valorD1 + valorD2;

  Serial.print("Dado 1: "); Serial.print(valorD1);
  Serial.print(" | Dado 2: "); Serial.print(valorD2);
  Serial.print(" | Suma: "); Serial.println(suma);

  mostrarNumero(1, valorD1, 0, 255, 0);
  mostrarNumero(2, valorD2, 0, 255, 0);

  if (suma == 7) {
    secuenciaGanador();
  }
}

void mostrarNumero(int numDado, int valor, uint8_t r, uint8_t g, uint8_t b) {
  Adafruit_NeoPixel &dado = (numDado == 1) ? dado1 : dado2;
  dado.clear();

  switch (valor) {
    case 1:
      dado.setPixelColor(7, dado.Color(r, g, b));
      dado.setPixelColor(12, dado.Color(r, g, b));
      break;
    case 2:
      dado.setPixelColor(0, dado.Color(r, g, b));
      dado.setPixelColor(15, dado.Color(r, g, b));
      break;
    case 3:
      dado.setPixelColor(0, dado.Color(r, g, b));
      dado.setPixelColor(7, dado.Color(r, g, b));
      dado.setPixelColor(12, dado.Color(r, g, b));
      dado.setPixelColor(15, dado.Color(r, g, b));
      break;
    case 4:
      dado.setPixelColor(0, dado.Color(r, g, b));
      dado.setPixelColor(4, dado.Color(r, g, b));
      dado.setPixelColor(19, dado.Color(r, g, b));
      dado.setPixelColor(15, dado.Color(r, g, b));
      break;
    case 5:
      dado.setPixelColor(0, dado.Color(r, g, b));
      dado.setPixelColor(4, dado.Color(r, g, b));
      dado.setPixelColor(7, dado.Color(r, g, b));
      dado.setPixelColor(12, dado.Color(r, g, b));
      dado.setPixelColor(19, dado.Color(r, g, b));
      dado.setPixelColor(15, dado.Color(r, g, b));
      break;
    case 6:
      dado.setPixelColor(0, dado.Color(r, g, b));
      dado.setPixelColor(2, dado.Color(r, g, b));
      dado.setPixelColor(4, dado.Color(r, g, b));
      dado.setPixelColor(19, dado.Color(r, g, b));
      dado.setPixelColor(17, dado.Color(r, g, b));
      dado.setPixelColor(15, dado.Color(r, g, b));
      break;
  }
  dado.show();
}

void secuenciaGanador() {
  for (int r = 0; r < 5; r++) {
    for(int i = 0; i < TOTAL_LEDS; i++) {
      dado1.setPixelColor(i, dado1.Color(255, 0, 0));
      dado2.setPixelColor(i, dado2.Color(255, 0, 0));
    }
    dado1.show(); 
    dado2.show();
    tone(BUZZER, 1100);
    delay(200);
    
    dado1.clear(); 
    dado2.clear();
    dado1.show(); 
    dado2.show();
    noTone(BUZZER);
    delay(200);
  }
}
