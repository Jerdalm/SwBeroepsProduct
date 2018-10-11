#define NLEDS 3

int leds[] = {7, 6, 5};

void setupLeds() {
  for (int i = 0; i < NLEDS; i ++) {
    pinMode(leds[i], OUTPUT);
  }
}

void turnLedOn(int led) {
  digitalWrite(led, HIGH);
}

void turnLedOff(int led) {
  digitalWrite(led, HIGH);
}
