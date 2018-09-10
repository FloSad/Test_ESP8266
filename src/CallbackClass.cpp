#include <CallbackClass.h>

//...............................................................................
//  CallbackClass.cpp
//...............................................................................
CallbackClass::CallbackClass(){
}

//...............................................................................
//  set callbacks
//...............................................................................
void CallbackClass::set_callbacks(CallbackFunction Callback1,
                                  CallbackFunction Callback2){
  on_Callback1 = Callback1;
  on_Callback2 = Callback1;
}
//...............................................................................
//  set callbacks
//...............................................................................
void CallbackClass::anyFunction(){
  if (on_Callback1 != nullptr) on_Callback1();  //callback event
  if (on_Callback2 != nullptr) on_Callback2();  //callback event
}
