
char value = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello World");
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0) 
      value = Serial.read();
      Serial.print(value);
}
