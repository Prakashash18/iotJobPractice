int input;  //declare an integer variable

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello World");
}

void loop() {
  // put your main code here, to run repeatedly:

  whle(Serial.available());  //wait for input 

  input = Serial.parseint(SKIP_ALL, '\n');

  if(input <= 0){
     Serial.println(input);
  }
  else {
    Serial.println("Negative numbers not allowed");
  }
}
