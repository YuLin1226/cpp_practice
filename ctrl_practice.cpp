#include <iostream>
#include "class_ctrl.h"

using namespace std;

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