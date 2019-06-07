
isHappy = true;
isHungry = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello World");

  if(isHappy) {
    Serial.println("I'm Happy");
  }
  else 
     Serial.println("I'm not Happy");
  }

  if(!isHungry){
    Serial.println("I'm not hungry");
  
  else {
     Serial.println("I'm hungry");
  }

  if(isHungry  isHappy) {
      Serial.println("I'm hungry and happy");
  }
  
  if(isHungry  isHappy){
      Serial.println("I'm either hungry or happy");
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
