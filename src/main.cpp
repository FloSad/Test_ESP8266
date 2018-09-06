//Testbranch
//Änderung 1

//geänderte MASTER

#include <Arduino.h>
#include <Wire.h>
#include <SSD1306.h>
#include <DHT.h>

#define SCL D2
#define SDA D1
#define DHT_PIN D5

SSD1306  display(0x3c, SDA, SCL);

#define LED1 D7
#define Button1 D6

int StatusButton1 = 0;
int StatusLED1 = LOW;

unsigned long previousMillis = 0;
const long interval = 1000;

unsigned long previousMillis_1 = 0;
const long interval_1 = 5000;

DHT dht;
float humidity ;
float temperature ;

void setup() {
    Serial.begin (115200);

    pinMode (Button1, INPUT);
    pinMode (LED1, OUTPUT);

    display.init();
    display.flipScreenVertically();
    display.setTextAlignment(TEXT_ALIGN_LEFT);
    display.setFont(ArialMT_Plain_16);

    dht.setup(D5);

}

void loop() {
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
}
