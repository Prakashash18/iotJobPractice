
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello World");

  int a = 10;
  int b = 0;
  Serial.println("Counting Down");
  
  while(a > b){
    Serial.println(a);
    a++;
  }
}

void loop() {
  // put your main code here, to run repeatedly:
 

}
