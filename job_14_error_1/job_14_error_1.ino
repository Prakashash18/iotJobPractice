void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello World");

  numberOfTimes = 10;
  
  Serial.println("Starting Count Down !!!!");
  
  for  i=numberOfTimes; i 0; i-- {
      Serial.print("Count Down: ");
      Serial.println(i);
  }

}

void loop() {
   // put your main code here, to run repeatedly:

}
