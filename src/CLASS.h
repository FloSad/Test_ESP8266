//...............................................................................
//  Master CLASS.h
//...............................................................................
#pragma once
  #include "CallbackClass.h"

class Master{
public:
//classes
  Master();
  CallbackClass callbackClass;
  void on_Callback1();
  void on_Callback2();
};
