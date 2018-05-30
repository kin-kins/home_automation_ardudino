#include<OneWire.h>
#include<DallasTemperature.h>
#define wire 2

OneWire oneWire (wire);
DallasTemperature sensors (&oneWire);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
sensors.begin();
}

void loop() {
  sensors.requestTemperatures();
  Serial.println(sensors.getTempCByIndex(0));
  delay(1000);
 
}
