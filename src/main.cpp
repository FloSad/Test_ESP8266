//Testbranch
//Änderung 1
//Änderung PC
//änderung 09.09.2018
//geänderte MASTER

#include <Arduino.h>
#include <GPIO.h>


GPIO gpio;

void setup() {
  Serial.begin (115200);
  gpio.setup();

  int i = gpio.beCount;
  //int y = gpio.privateVar;

}

void loop() {
  gpio.handle();
}


void machWas(){
  
}
