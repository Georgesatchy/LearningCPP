#include <iostream>
using namespace std;

int main() {
    int speed1 = 1;
    for (int speed2 = 1; speed2 < 20; speed2++) {
        int a = 0, b = 0;
        do {
            a += speed1;
            b += speed2;
        }
        while (a%1440 != b%1440);
        if (a%1440 != 0) {
            cout << speed2 << endl;
        }
    }
}