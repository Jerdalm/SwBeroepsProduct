#define GEEL 5
#define GROEN 6
#define ROOD 7

void setup() {
  Serial.begin(9600);
  setupLeds();
  setupTemp();
}

void loop() {
  Serial.print("licht sterkte: ");
  Serial.println(lichtSensor());
  Serial.print("temperatuur :");
  Serial.println(getTemperature());
  delay(1000);
}
