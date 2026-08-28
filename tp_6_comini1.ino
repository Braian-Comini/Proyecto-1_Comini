#define TEMP A0
#define PIR 2
#define lamp 3
#define motor 5

void setup() {
  pinMode(PIR, INPUT);
  pinMode(TEMP, INPUT);
  pinMode(lamp, OUTPUT);
  pinMode(motor, OUTPUT);
  Serial.begin(9600);
}

void loop() {
 
  float temp = (analogRead(TEMP) * 5.0 / 1024.0) * 100.0 - 50.0;
  bool mov = digitalRead(PIR);


  if (mov == true) {
    digitalWrite(lamp, HIGH); 
  } else {
    digitalWrite(lamp, LOW); 
  }

 
  if (temp >= 50.0) {
 
    analogWrite(motor, 255);
  } 
  else if (mov == true) {

    if (temp <= 15.0) {
      analogWrite(motor, 50);
    } 
    else if (temp > 15.0 && temp < 50.0) {
      int velocidad = map(temp, 15, 50, 50, 255);
      analogWrite(motor, velocidad);
    }
  } 
  else {

    analogWrite(motor, 0);
  }


  Serial.print("Movimiento: ");
  Serial.println(mov ? "SI" : "NO");
  Serial.print("Temperatura: ");
  Serial.print(temp);
  Serial.println(" °C");
  
  delay(100);
}
