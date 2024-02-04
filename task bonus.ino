int LED=3;
int count=5;
int LIGHT=0;
void setup() 
{
	pinMode(LED,OUTPUT);
}

void loop() 
{ 
  analogWrite(LED, LIGHT);

  LIGHT = LIGHT + count;

  if (LIGHT <= 0 || LIGHT >= 255)
  {
    count = -count;
  }
  delay(50);
}