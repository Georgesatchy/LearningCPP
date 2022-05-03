#include <iostream>
using namespace std;

int main() {
    int temp;
    int bitch[5] = {6, 8, 23, 2, 6};
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - 1; j++) {
            if (bitch[j] > bitch[j+1]) {
                temp = bitch[j];
                bitch[j] = bitch[j+1];
                bitch[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        cout << bitch[i] << endl;
    }
}