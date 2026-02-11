int duration=5,ledred=6,ledgreen=5,voltage=0;
void setup() {
  pinMode(ledred,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for (voltage=0; voltage<=250;voltage++){
    analogWrite(ledred,voltage);
    analogWrite(ledgreen,250-voltage);
    Serial.println(voltage);
    delay(duration);
  }
  for (voltage=250; voltage>=0;voltage--){
    analogWrite(ledred,voltage);
    analogWrite(ledgreen,250-voltage);
    Serial.println(voltage);
    delay(duration);
  }
}
