#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 7

OneWire oneWire(ONE_WIRE_BUS);

DallasTemperature sensors(&oneWire);

void setupTemp() {
  sensors.begin();
}

float getTemperature() {
  sensors.requestTemperatures();
  float celcius = sensors.getTempCByIndex(0);
  return celcius;
}
