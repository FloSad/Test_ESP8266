#include <CallbackClass.h>

//...............................................................................
//  CallbackClass.cpp
//...............................................................................
CallbackClass::CallbackClass(){

}

void CallbackClass::handle(){
  anyFunction();
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
  pinMode(12, INPUT_PULLUP);

  if (!digitalRead(12)) {
    //Serial.println("GPIO D6");
    int pin = 12;
    if (on_Callback1 != nullptr) on_Callback1(pin);  //callback event
  }


  //if (on_Callback1 != nullptr) on_Callback1();  //callback event
  //if (on_Callback2 != nullptr) on_Callback2();  //callback event
}
