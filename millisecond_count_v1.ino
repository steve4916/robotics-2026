int pinLed=8;
unsigned long timeStart=0,timeWait=1000;
void setup(){
  pinMode(pinLed,OUTPUT);
  digitalWrite(pinLed,LOW);
  timeStart=millis();
  Serial.begin(9600); 
}
void loop(){
  int timeCurrent=millis();
  //Serial.print("Full millis(): \t\t");
  //Serial.println(timeCurrent);
  if(timeCurrent>=timeStart+timeWait){
    digitalWrite(pinLed,HIGH);
  }
}
