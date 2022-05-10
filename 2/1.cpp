#include <iostream>
using namespace std;

int main() {
    int temp;
    int list[5] = {6, 8, 23, 2, 6};
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - 1; j++) {
            if (list[j] > list[j+1]) {
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
    for (int i : list) {
        cout << i << endl;
    }
}