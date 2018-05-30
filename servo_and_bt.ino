#include<Servo.h>
int servopin=4;
Servo Servo1;
void setup() {
  // put your setup code here, to run once:
Servo1.attach(servopin);
Serial.begin(9600);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
}
char c;
void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available())
{
 c=Serial.read();
 if(c=='1')
 {
Servo1.write(90);
delay(1000);
 }
 else if (c=='2')
 {
Servo1.write(180);
delay(1000);
 }
 else if(c=='3')
 {
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
 
 }
 else if(c=='4')
 {
  digitalWrite(2,0);
  digitalWrite(3,LOW);
 
 }
}
 
}
