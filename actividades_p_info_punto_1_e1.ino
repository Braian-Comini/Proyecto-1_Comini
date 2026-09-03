#define LED1_R 2
#define LED1_B 3
#define LED1_G 4
#define LED2_R 5
#define LED2_B 6
#define LED2_G 7
void setup()
{
	pinMode( 2 , OUTPUT );
  	pinMode( 3 , OUTPUT );
    pinMode( 4 , OUTPUT );
  	pinMode( 5 , OUTPUT );
  	pinMode( 6 , OUTPUT );
  	pinMode( 7 , OUTPUT );
}

void loop()
{
  delay(500);
  	digitalWrite( LED1_R , HIGH );
  delay(500);
  	digitalWrite( LED1_R , LOW );
  	digitalWrite( LED1_B , HIGH );
  	digitalWrite( LED1_G , HIGH );
  	
  delay(500);
  	digitalWrite( LED1_B , LOW );
  delay(500);
  	digitalWrite( LED1_G , LOW );
  	digitalWrite( LED1_R , HIGH ),
  	digitalWrite( LED1_B , HIGH );
  delay(500);
  	digitalWrite( LED1_R , LOW );
  	digitalWrite( LED1_G , LOW );
  	digitalWrite( LED1_B , HIGH );
  delay(500);
  	digitalWrite( LED1_B , LOW );
  
  	digitalWrite( LED1_R , HIGH );
  	digitalWrite( LED1_G , HIGH );
  	digitalWrite( LED1_B , HIGH );
  delay(500);
  	digitalWrite( LED1_B , LOW );
  delay(500);
  	digitalWrite( LED1_R , LOW );
  	digitalWrite( LED1_G , LOW );
  
  
  
  delay(500);
  	digitalWrite( LED2_R , HIGH );
  delay(500);
  	digitalWrite( LED2_R , LOW );
  	digitalWrite( LED2_B , HIGH );
  	digitalWrite( LED2_G , HIGH );
  	
  delay(500);
  	digitalWrite( LED2_B , LOW );
  delay(500);
  	digitalWrite( LED2_G , LOW );
  	digitalWrite( LED2_R , HIGH ),
  	digitalWrite( LED2_B , HIGH );
  delay(500);
  	digitalWrite( LED2_R , LOW );
  	digitalWrite( LED2_G , LOW );
  	digitalWrite( LED2_B , HIGH );
  delay(500);
  	digitalWrite( LED2_B , LOW );
  
  	digitalWrite( LED2_R , HIGH );
  	digitalWrite( LED2_G , HIGH );
  	digitalWrite( LED2_B , HIGH );
  delay(500);
  	digitalWrite( LED2_B , LOW );
  delay(500);
  	digitalWrite( LED2_R , LOW );
  	digitalWrite( LED2_G , LOW );
}