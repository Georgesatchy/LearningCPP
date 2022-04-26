#include <iostream>
using namespace std;

int main() {
    cout << "Hello World!" << endl;
    const int x = 5;
    if (x > 5) {
        return 1;
    } else if (x == 5) {
        return 0;
    } else {
        return 1;
    }
}
