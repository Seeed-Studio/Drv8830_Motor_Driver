#include <Wire.h>
#include <SparkFunMiniMoto.h>
#include "Hercules_Stepper.h"

stepper_4wd stepper(200);

void setup() {
    stepper.setSpeed(100, 400);
}

void loop() {
    stepper.step(-10000);
    //delay(10);
    //stepper.step(-1000);
    //delay(10);

}