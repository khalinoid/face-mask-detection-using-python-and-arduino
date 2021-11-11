int red_led = 13;
int green_led = 12;
void setup(){
  pinMode(red_led,OUTPUT);
  pinMode(green_led,OUTPUT);
  Serial.begin(96000);
}
void loop(){
  while(Serial.available()){
    char incoming = Serial.read();
    if(incoming == "S"){
      Serial.println("System closed");
    }
    else if(incoming == "P"){
      Serial.println("System opened!");
    }
  }
}
