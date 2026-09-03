#define LED 3
#define LED2_R 2
#define LED2_B 4
#define LED3_B 5
#define LED3_G 6
#define Buzz 9
void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
  analogWrite(Buzz, 50);
  delay(100);
  analogWrite(Buzz, 0);
  analogWrite(LED, 255);
  delay(500);
  analogWrite(Buzz, 50);
  delay(100);
  analogWrite(Buzz, 0);
  analogWrite(LED, 0);
  digitalWrite(LED2_R, HIGH);
  digitalWrite(LED2_B, HIGH);
  delay(500);
  analogWrite(Buzz, 50);
  delay(100);
  analogWrite(Buzz, 0);
  digitalWrite(LED2_R, LOW);
  digitalWrite(LED2_B, LOW);
  analogWrite(LED3_B, 255);
  analogWrite(LED3_G, 255);
  delay(500);
  analogWrite(LED3_B, 0);
  analogWrite(LED3_G, 0);
 
}