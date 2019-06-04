void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello World");

  int result = add(5, 10);
  printAnswer(result);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  

}

void printAnswer(int result) {
  Serial.println(result);
}

void add(int , int ){
  return first+second;
}
