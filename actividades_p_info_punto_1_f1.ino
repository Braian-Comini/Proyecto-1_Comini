#define boton 2
#define buzz 3

void setup()
{
  pinMode(boton,INPUT);
  pinMode(buzz,OUTPUT);
}

void loop()
{
  int b = digitalRead(boton);

  if(boton == LOW)
  {
    digitalWrite(buzz,HIGH);
    tone(buzz,1200);
    delay(50);
    tone(buzz,1200);
    delay(50);
    tone(buzz,1200);
    delay(300);
    
  }else
  {
    digitalWrite(buzz,LOW);
    noTone(buzz);
  }
}






