void setup() {
  pinMode(34,INPUT);
  pinMode(4,OUTPUT);
  Serial.begin(115200);
}

void loop() {
  int value=digitalRead(34);
  Serial.println(value);
  if(value==HIGH)
  {
    digitalWrite(4,HIGH);
    delay(1000);
  }
  else
  {
    digitalWrite(4,LOW);
    delay(1000);
  }
}
