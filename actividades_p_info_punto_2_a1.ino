void setup()
{
  pinMode(3 , OUTPUT);
}

void loop()
{
  analogWrite(3,51);
  delay(600);
  analogWrite(3,102);
  delay(600);
  analogWrite(3,153);
  delay(600);
  analogWrite(3,204);
  delay(600);
  analogWrite(3,255);
  delay(600);
}