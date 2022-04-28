#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number;
    cout << "Enter a number to test if it's prime:";
    cin >> number;
    for (int n = 2; n < sqrt(number); n++) {
        if (number % n == 0) {
            cout << "That number is not prime!";
            return 0;
        }
    }
    cout << "That number is prime!";
    return 0;
}