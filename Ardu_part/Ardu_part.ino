int green_led = 12;
int red_led = 13;
void setup(){
  pinMode(green_led, OUTPUT);
  pinMode(red_led,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  if (Serial.available()){
    int state = Serial.parseInt();
    if (state == 1){
      digitalWrite(green_led, HIGH);
      digitalWrite(red_led, LOW);
      }
    else if (state == 0){
        digitalWrite(red_led, HIGH);
        digitalWrite(green_led, LOW);
      }
    else{
      digitalWrite(red_led,LOW);
      digitalWrite(green_led,LOW);
    }
   }
}
