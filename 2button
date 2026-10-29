int led = 4;
int buttona = 5;
int buttonb = 6;

void setup() {
 pinMode(led,OUTPUT);
 pinMode(buttona,INPUT_PULLUP);
 pinMode(buttonb,INPUT_PULLUP);
}

void loop() {
  int buttonstatea = digitalRead(buttona);
  int buttonstateb = digitalRead(buttonb);
  if (buttonstatea == LOW){
    digitalWrite(led,HIGH);
  }
  if( buttonstateb == LOW){
    digitalWrite(led,LOW);
  }
}
