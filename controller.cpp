#include "controller.h"
Ctrl::Ctrl() {
    
}


double Ctrl::PID() {
    error = ref - lp_w;
    pwm = error*5; //之後改成另一個形式: u2 = u1 + ...*e2 - ...*e1
    return pwm;
}

double Ctrl::get_omega(){
    w2 = (theta - theta_last)/dt;
    return w2;
}

double Ctrl::low_pass_filter(){
    lp_w = (w0 + 2*w1 + w2)/4;
    return lp_w;
}



/*

int main(void) {
    
    Ctrl t;
    t.ref = 11; 
    t.lp_w=0;

    while(1) {
        t.ref = 11; 
        gain = t.PID();
        
        if .... 
        endif

        t.theta_last = t.theta;
        t.theta = counter /4;

        t.w0 = t.w1;
        t.w1 = t.w2;
        t.w2 = t.get_omega();
        t.lp_w = t.low_pass_filter();

    }

    return 0;
}

*/