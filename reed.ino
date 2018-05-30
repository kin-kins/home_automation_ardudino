void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
pinMode(4,INPUT);
Serial.begin(9600);
}
int z;
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(3,HIGH);
  
z=digitalRead(4);
Serial.println(z);
delay(1000);
}
