void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  analogWrite(3,0);
  analogWrite(5,51);
  analogWrite(6,153);
  analogWrite(9,204);
  analogWrite(10,255);
}