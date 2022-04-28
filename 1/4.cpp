#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 0;
    int found = 0;
    while (found < 1000) {
        n += 1;
        int number = n*n + n + 41;
        bool prime = true;
        for (int i = 2; i < sqrt(number); i++) {
            if (number % i == 0) {
                prime = false;
                break;
            }
        }
        if (prime == true) {
            cout << number << endl;
            found += 1;
        }
    }
    return 0;
}