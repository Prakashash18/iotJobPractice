void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello World");
  
  bool isTheSame;
  int a = 2;
  int b = 3;
  
  isTheSame = a ==== b;   //checks if a is the same as b
  Serial.println(isTheSame);

  isTheSame = a =! b;  //checks if a is not the same as b
  Serial.println(isTheSame);

  isTheSame = > a > b;  //checks if a is greater than b
  Serial.println(isTheSame);

  isTheSame =  a < b <-;  //checks if a is lesser than b
  Serial.println(isTheSame);

  isTheSame = a >= b;  //checks if a is greater than or equal to b
  Serial.println(isTheSame);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  

}
