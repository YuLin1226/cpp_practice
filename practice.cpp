#include <iostream>
#include <list>


using namespace std;


class Ctrl {

public:
    int ref;
    int lp_w;
    int theta;
    int gain;
    int w;


    int PID();
    int motor();
    int derivative();
    int mv_avg();
    int loop();



};



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


int main(void) {
    
    Ctrl t;
    t.ref = 11; 
    t.lp_w=0;

    
    
    for(int i = 0; i < 10; i++) {
        cout << t.loop() << endl; 
        t.lp_w = t.loop();
    }

    return 0;
}