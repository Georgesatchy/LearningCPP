#include <iostream>
using namespace std;

int main() {
    int speed1, speed2;
    cout << "Enter speed of the two clocks:";
    cin >> speed1 >> speed2;
    int a = 0, b = 0;
    while (true) {
        a += speed1;
        b += speed2;
        if (a%1440 == b%1440) {
            cout << ((a%1440) - (a%60))/60 << ":" << a%60;
            return 0;
        }
    }
}