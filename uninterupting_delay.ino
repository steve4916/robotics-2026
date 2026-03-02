int buttonred=8,buttongreen=9;
int ledred=6,ledgreen=7;
int timecurrent=0,timetarget=0,timeinterval=300;

void setup(){
  pinMode(ledred,OUTPUT);
  pinMode(ledgreen,OUTPUT);
  pinMode(buttonred,INPUT);
  pinMode(buttongreen,INPUT);
}

void loop(){
  timecurrent=millis();
  if(timecurrent>=timetarget){
    digitalWrite(ledred,digitalRead(buttonred));
    digitalWrite(ledgreen,digitalRead(buttongreen));
    if(timecurrent>=timetarget+timeinterval)
      timetarget=timecurrent+timeinterval;
  }
  else{
    digitalWrite(ledred,LOW);
    digitalWrite(ledgreen,LOW);
  }
}
