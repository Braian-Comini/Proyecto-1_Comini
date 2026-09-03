
void setup()
{
  pinMode( 2 , OUTPUT );
  pinMode( 4 , OUTPUT );
  pinMode( 7 , OUTPUT );
  pinMode( 12 , OUTPUT );
  pinMode( 13 , OUTPUT );
}

void loop()
{
  digitalWrite( 7 , LOW );
  digitalWrite( 2 , HIGH );
  digitalWrite( 12 , LOW );
  digitalWrite( 13 , HIGH );
  
  delay(5000);
  
  digitalWrite( 2 , LOW );
  digitalWrite( 13 , LOW );
  digitalWrite( 4 , HIGH );
  
  delay(2000);
  
  digitalWrite( 4 , LOW );
  digitalWrite( 7 , HIGH );
  digitalWrite( 12 , HIGH );
  
  delay(5000);
}