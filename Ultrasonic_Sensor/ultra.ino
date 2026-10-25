void setup() {
  Serial.begin(115200);
  pinMode(18,OUTPUT); //trig pin
  pinMode(34,INPUT); //echo pin
  pinMode(4,OUTPUT); //red led
  pinMode(19,OUTPUT); //yellow led
  pinMode(21,OUTPUT); //green led
}

void loop() {
  digitalWrite(18,LOW);
  delayMicroseconds(2);
  digitalWrite(18,HIGH);
  delayMicroseconds(10);
  digitalWrite(18,LOW);
  
  long duration=pulseIn(34,HIGH);  //duration for which echo is high
  float distance=duration*0.0343/2; //convert to distance
  Serial.println(distance);
  
  digitalWrite(4,LOW);   // initialize all leds to low
  digitalWrite(19,LOW);
  digitalWrite(21,LOW);
  
  if(distance>30&&distance<60)
  digitalWrite(21,HIGH);  //green led
  else if(distance>15&&distance<30)
  digitalWrite(19,HIGH);  //yellow led
  else if(5<distance&&distance<15)
  digitalWrite(4,HIGH);  //red led
  
  delay(500);
}
