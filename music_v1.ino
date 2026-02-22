#define C4 262
#define D4 294
#define E4 330
#define G4 392
#define C5 523
#define C3 131
int s[4]={C4,D4,E4,C5};
int buttonPins[5]={8,9,10,12};
int speakerPin=3;
void setup(){
  for(int i=0;i<4;i++)
    pinMode(buttonPins[i], INPUT);
  Serial.begin(9600);
}

void loop(){
  for(int i=0;i<4;i++){
    int k=digitalRead(buttonPins[i]);
    Serial.print(k);
    if(k) tone(speakerPin,s[i],10);
  }
}