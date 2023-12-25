// C++ code
//
int led=12;
int pot = A0;
int brightness = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(pot,INPUT);

}

void loop()
{
  brightness=map(analogRead(pot),0,1023,0,255);
  Serial.println(brightness);
  analogWrite(led,brightness);

  }
  }