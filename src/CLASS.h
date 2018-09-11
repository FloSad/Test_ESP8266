//...............................................................................
//  Master CLASS.h
//...............................................................................
#pragma once
  #include "CallbackClass.h"

class Master{
public:
//classes
  Master();
  void handle();

  CallbackClass callbackClass;
  void on_Callback1(int pin);
  void on_Callback2(int pin);
};
