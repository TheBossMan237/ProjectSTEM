#include <PRIZM.h>
PRIZM p;
void setup() {
 p.PrizmBegin();
 p.setMotorInvert(1,1);
}

void loop() {
  while(p.readLineSensor(3) ==HIGH) {
    p.setMotorPowers(100,100);
  }
  p.setMotorPowers(125, 125);
  p.PrizmEnd();
}
