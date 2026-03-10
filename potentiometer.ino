int sensorValue = 0;
int ledred = 9;
int ledBrightness = 0;
void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(ledred, OUTPUT);
  // putes
}

void loop() {
  sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  ledBrightness = sensorValue;
  analogWrite(ledred,ledBrightness);
  analogWrite(9,sensorValue/4);
  delay(100);
  // pool
}
