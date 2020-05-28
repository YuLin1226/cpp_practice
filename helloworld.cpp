#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> d = {1, 2, 3, 4};  // [1, 2, 3, 4]

    // d.push_back(5); // [1, 2, 3, 4, 5]
    // d.pop_front(); // [2, 3, 4, 5]
    // d.push_front(0); // [0, 2, 3, 4, 5]
    // d.pop_back(); // [0, 2, 3, 4]

    // 印出 deque 內所有內容, c++11 才支援
    for (int i=0; i<5; i++) {
        d.push_back(i);
        d.pop_front();
        cout << d[1] << endl;
    }
    

    

    return 0;
}