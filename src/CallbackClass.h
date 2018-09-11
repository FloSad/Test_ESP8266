#include <Arduino.h>
//...............................................................................
//  CallbackClass.h
//...............................................................................
#pragma once
  #include <functional>
  typedef std::function<void(int pin)> CallbackFunction;

class CallbackClass{
public:
  CallbackClass();
  void handle();
  void set_callbacks(CallbackFunction Callback1,
                     CallbackFunction Callback2);
  void anyFunction();
private:
  CallbackFunction on_Callback1;
  CallbackFunction on_Callback2;
};
