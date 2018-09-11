#include "GPIO.h"

//###############################################################################
//  CLASS GPIO
//###############################################################################
GPIO::GPIO(){

}

void GPIO::setup(){
  pinMode (Button1, INPUT);
  pinMode (LED1, OUTPUT);

}

void GPIO::handle(){
  master.handle();

}

void GPIO::setCallback(){

}



/*
pinMode (Button1, INPUT);
pinMode (LED1, OUTPUT);

display.init();
display.flipScreenVertically();
display.setTextAlignment(TEXT_ALIGN_LEFT);
display.setFont(ArialMT_Plain_16);

dht.setup(D5);
*/
//------------------------

/*
unsigned long currentMillis = millis();
display.clear();

if (currentMillis - previousMillis_1 >= interval_1) {
  previousMillis_1 = currentMillis;
  humidity = dht.getHumidity();
  temperature = dht.getTemperature();
}
display.drawString(2, 1, ("Temp:"+String(humidity)+"°C"));
display.drawString(2, 22, ("Feuch:"+String(temperature)+"%"));
//  display.drawString(2, 43, "Platzhalter");


if (currentMillis - previousMillis >= interval) {
  previousMillis = currentMillis;

  if (StatusLED1 == LOW) {
    StatusLED1 = HIGH;
  } else {
    StatusLED1 = LOW;
  }
  digitalWrite(LED1, StatusLED1);
}

if (digitalRead(Button1) == HIGH){
  display.drawString(2,43, "Taste on");
  if(StatusButton1 == 0){
  Serial.println("Taste gedrückt");
  StatusButton1 = 1;
}
}
else{
  display.drawString(2,43, "Taste not on");
  if(StatusButton1 == 1){
  Serial.println("Taste nicht gedrückt");
  StatusButton1 = 0;
}
}

display.drawVerticalLine(0, 0, 64);
display.drawVerticalLine(127, 0, 64);
display.drawHorizontalLine(0, 0, 128);
display.drawHorizontalLine(0, 63, 128);
display.drawHorizontalLine(0, 20, 128);
display.drawHorizontalLine(0, 42, 128);
display.display();

delay(10);
*/
