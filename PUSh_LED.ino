// C++ code
//
//#define ACTIVATED LOW


int led=12;
int push =7;
int state;
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(push,INPUT);
  digitalWrite(push,HIGH);


}

void loop()
{
   state=digitalRead(push);
  if(state==LOW){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
}

  