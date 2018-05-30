#include<LiquidCrystal.h>
LiquidCrystal lcd(2,4,9,10,11,12);
int t,counter=0;int timeset; int hour=0 ;int minutes=0; int decide;int ahour;int aminutes;
int xh;int xm; int ah;int am;// x variables are for clock timing where as a variables for alarm timing
int ring;

void setup()
{
lcd.begin(16,2);
lcd.clear();
lcd.setCursor(0,0);
pinMode(13,INPUT); //button read for normal minutes 
pinMode(12,INPUT);//button read for normal hours
pinMode(11,INPUT);//button read for alarm minutes
pinMode(10,INPUT);//button read for alarm hours
pinMode(6,OUTPUT);//buzzer black wires 
pinMode(7,OUTPUT);//buzzer red wires
pinMode(8,OUTPUT);//button
pinMode(3,OUTPUT);//button
pinMode(2,OUTPUT);//button
pinMode(5,OUTPUT);//button
}
int first=0;
void loop()
{
  digitalWrite(5,1);
  digitalWrite(2,1);
  digitalWrite(3,1);
  digitalWrite(8,1);
  delay(10);
  t=millis()/1000;
  xm=digitalRead(13);
  xh=digitalRead(12);
  ah=digitalRead(10);
  am=digitalRead(11);
  
  delay(100);
  
  if((xm==0)||(t==60))
  {
  minutes++;
  first=1;
  }
  if(minutes==60)
 {
  minutes=0;
 }
  if (xh==0)
  {
    hour++;
  }
  if(hour==24)
  {
    hour=0;
  }
  if(ah==0)
  {
    ahour++;
  }
  if(ahour==24)
  {
    ahour=0;
  }
  if(am==0)
  {
    aminutes++;
  }
  if(aminutes==60)
  {
    aminutes==0;
  }
  if((aminutes==minutes)&&(ahour==hour))
{
  digitalWrite(7,HIGH);
  digitalWrite(6,LOW);
 
}
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(hour);
  lcd.print(":");
  lcd.print(minutes);
  lcd.setCursor(0,1);
  lcd.print(t);  
}
