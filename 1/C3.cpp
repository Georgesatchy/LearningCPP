#include <iostream>
using namespace std;

int main() {
    int max = 0;
    for (int speed1 = 1; speed1 < 1440; speed1++) {
        for (int speed2 = 1; speed2 < 1440; speed2++) {
            int a = 0, b = 0;
            do {
                a += speed1;
                b += speed2;
            } while (a % 1440 != b % 1440);
            if (a > max) {
                max = a;
            }
        }
    }
    cout << max << " hours";
}