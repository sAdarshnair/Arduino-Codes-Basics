// C++ code
int led = 12;
int val = 0;
int state = LOW;
int PIR = 8;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(PIR, INPUT);
}

void loop() {
  val = digitalRead(PIR);
  if (val == HIGH) {
    digitalWrite(led, HIGH);
    delay(500);
    if (state == LOW) {
      Serial.println("Motion Detected!");
      state = HIGH;
    }
  } else {
    digitalWrite(led, LOW);
    delay(500);
    if (state == HIGH) {
      Serial.println("Motion Stopped");
      state = LOW;
    }
  }
}