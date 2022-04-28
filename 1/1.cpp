#include <iostream>
using namespace std;

int main() {
    const double g = -9.81;
    double u, t;
    cout << "Enter initial velocity:";
    cin >> u;
    cout << "Enter time elapsed:";
    cin >> t;
    double displacement = u*t + 0.5*g*t*t;
    cout << "The displacement is " << displacement;
};
