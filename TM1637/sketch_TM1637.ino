#include "TM1637.h"

#define CLK 10
#define DIO 11

TM1637 display(CLK, DIO);

void setup() {
  display.clearDisplay();
  display.setBrightness(2);
  display.showPoints(true);
}

void loop() {
  for (uint16_t n = 0; n < 24; n++) {
    for (uint16_t n2 = 0; n2 < 60; n2++) {
      display.displayTwoNumbers(n, n2);
      delay(100);
    }
  }
}
