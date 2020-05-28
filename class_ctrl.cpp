#include "class_ctrl.h"
Ctrl::Ctrl() {
    
}


int Ctrl::PID() {
    gain = (ref - lp_w)*5;
    return gain;
}

int Ctrl::motor(){
    theta = gain * 5 -3;
    return theta;
}

int Ctrl::derivative(){
    w = theta / 10;
    return w;
}

int Ctrl::mv_avg(){
    lp_w = w;
    return lp_w;
}

int Ctrl::loop(){
    Ctrl::PID();
    Ctrl::motor();
    Ctrl::derivative();
    return Ctrl::mv_avg();
}