void setup() 
{
 Serial.begin(9600);
pinMode(7,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
}
int z;
void loop()
{
digitalWrite(7,0);
z=analogRead(A0);
Serial.println(z);
if(z>200)
{
digitalWrite(2,1);
digitalWrite(3,0);
delay(1000);
}
else 
digitalWrite(2,0);
delay(100);
}
