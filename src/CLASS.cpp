#include <CLASS.h>
//...............................................................................
//  Master CLASS.cpp
//...............................................................................
Master::Master(){

//callback Events
  callbackClass.set_callbacks(std::bind(&Master::on_Callback1, this),
                              std::bind(&Master::on_Callback2, this));
}

void Master::on_Callback1(){

}
void Master::on_Callback2(){

}
