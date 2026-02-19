int buttonPin=2,ledPin=13,buttonState=0;
void setup(){
  Serial.begin(9600);
  pinMode(buttonPin,INPUT);
  pinMode(ledPin,OUTPUT);
}
void loop(){
  buttonState=digitalRead(buttonPin);
  Serial.print(buttonState);
  delay(100);
}
