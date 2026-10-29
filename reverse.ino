int led = 5;
int button = 6;
void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}
void loop() {
  int buttonstate = digitalRead(button);
  if(buttonstate == HIGH){
    digitalWrite(led,HIGH);
    
}else{
  digitalWrite(led,LOW);

}
}
