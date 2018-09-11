#include <CLASS.h>
//...............................................................................
//  Master CLASS.cpp
//...............................................................................
Master::Master(){

//callback Events
  callbackClass.set_callbacks(std::bind(&Master::on_Callback1, this, std::placeholders::_1),
                              std::bind(&Master::on_Callback2, this, std::placeholders::_1));
}

void Master::handle(){
  callbackClass.handle();

}

void Master::on_Callback1(int pin){
  Serial.println("Der Taster ist gedrückt!");
  Serial.println("pin: " + String(pin));


}
void Master::on_Callback2(int pin){

}
