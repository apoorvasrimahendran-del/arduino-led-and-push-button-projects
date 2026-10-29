int red= 4;
int yellow = 5;
int button = 6;
void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(button, INPUT_PULLUP);
}
void loop() {
  int buttonstate = digitalRead(button);
  if(buttonstate == LOW){
    digitalWrite(red,HIGH);
    digitalWrite(yellow,LOW);
}else{
  digitalWrite(red,LOW);
  digitalWrite(yellow, HIGH);
}
}
