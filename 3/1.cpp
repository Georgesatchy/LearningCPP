#include <iostream>
using namespace std;

bool PythagoreanTriples();

int main() {
    PythagoreanTriples();
    return 0;
}

bool PythagoreanTriples() {
    int a, b, c;
    cin >> a >> b >> c;
    if ((a*a - b*b == c*c) || (b*b - c*c == a*a) || (c*c - a*a == b*b)) {
        cout << "Those numbers are Pythagorean triples!";
        return true;
    }
    cout << "Those numbers are not Pythagorean triples!";
    return false;
}
