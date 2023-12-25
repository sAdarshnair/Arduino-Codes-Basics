// C++ code
int ldr=A0;
int value=0;
int led=12;
char input;

void setup()
{
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(ldr,INPUT);
}

void loop()
{
  value=analogRead(ldr);
  Serial.println("ldr value is : ");
  Serial.println(value);
  if (value<100){
      digitalWrite(led,LOW);
  }
  else {
    digitalWrite(led,HIGH);
  }
  }