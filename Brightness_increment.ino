// C++ code
//
int led=12;
void setup()
{

  pinMode(relay,OUTPUT);
}

void loop()
{
  brightness=brightness+1;
  Serial.println(brightness);
  analogWrite(led,brightness);
  delay(50);	 
  if (brightness>255);
  brightness=0;
  }