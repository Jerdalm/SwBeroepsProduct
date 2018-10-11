int lichtSensor() {
  const int LDRPIN = A1;
  pinMode(LDRPIN, INPUT);
  int ldrValue = analogRead(LDRPIN);
  return(mapFunctie(ldrValue, 0, 950, 0, 255));
}
