// C++ code
//
int relay=12;
char input;

void setup()
{
  Serial.begin(9600);
  pinMode(relay,OUTPUT);
  Serial.print("write hr to turn on the relay for 1 hr \n and min to turn on for 30 min") ;
}

void loop()
{
input = Serial.read();
  if(input == 'hr'){
    digitalWrite(relay,HIGH);
    delay(3600000);
  }
  if (input=='min'){
      digitalWrite(relay,LOW);
      delay(1800000);

  }
  }