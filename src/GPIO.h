#include <Arduino.h>
#include <Wire.h>

#define LED1 D7
#define Button1 D6


class GPIO {
public:
  GPIO();
  void setup();
  void handle();
  void setCallback();
  int beCount = 2;

private:

  int privateVar = 0;

};







//#include <SSD1306.h>
//#include <DHT.h>

/*
#define SCL D2
#define SDA D1
#define DHT_PIN D5

SSD1306  display(0x3c, SDA, SCL);


int StatusButton1 = 0;
int StatusLED1 = LOW;

unsigned long previousMillis = 0;
const long interval = 1000;

unsigned long previousMillis_1 = 0;
const long interval_1 = 5000;

DHT dht;
float humidity ;
float temperature ;
*/
