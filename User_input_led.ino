// C++ code
//
int led=12;
char input;

void setup()
{
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  Serial.print("press Y to turn on the LED \n and N to turn off") ;
}

void loop()
{
input = Serial.read();
  if(input == 'Y'){
    digitalWrite(led,HIGH);
  }
  if (input=='N'){
      digitalWrite(led,LOW);

  }
  }