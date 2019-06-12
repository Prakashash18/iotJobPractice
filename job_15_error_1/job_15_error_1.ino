
//code to blink LED, 
void blinkLed(){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
}


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  Serial.println("Hello World");
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if(Serial.available() > 0){
    
    int numberOfBlinks = Serial.parseInt();

    if(numberOfBlinks > 0){
      Serial.println(numberOfBlinks);

      for(int i=0: i<numberOfBlinks: i++){
        blinkLed();
      }

      Serial.println("Done Blinking");
      
    }
  }

}
