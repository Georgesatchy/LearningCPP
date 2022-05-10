#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int result[3][3] = {{matrix1[0][0]*matrix2[0][0] + matrix1[0][1]*matrix2[1][0] + matrix1[0][2]*matrix2[2][0],
                                matrix1[0][0]*matrix2[0][1] + matrix1[0][1]*matrix2[1][1] + matrix1[0][2]*matrix2[2][1],
                                matrix1[0][0]*matrix2[0][2] + matrix1[0][1]*matrix2[1][2] + matrix1[0][2]*matrix2[2][2]},
                        {matrix1[1][0]*matrix2[0][0] + matrix1[1][1]*matrix2[1][0] + matrix1[1][2]*matrix2[2][0],
                                matrix1[1][0]*matrix2[0][1] + matrix1[1][1]*matrix2[1][1] + matrix1[1][2]*matrix2[2][1],
                                matrix1[1][0]*matrix2[0][2] + matrix1[1][1]*matrix2[1][2] + matrix1[1][2]*matrix2[2][2]},
                                {matrix1[2][0]*matrix2[0][0] + matrix1[2][1]*matrix2[1][0] + matrix1[2][2]*matrix2[2][0],
                                matrix1[2][0]*matrix2[0][1] + matrix1[2][1]*matrix2[1][1] + matrix1[2][2]*matrix2[2][1],
                                matrix1[2][0]*matrix2[0][2] + matrix1[2][1]*matrix2[1][2] + matrix1[2][2]*matrix2[2][2]}};
    cout << setw(10) << result[0][0] << setw(10) << result[0][1] << setw(10) << result[0][2] << endl <<
            setw(10) << result[1][0] << setw(10) << result[1][1] << setw(10) << result[1][2] << endl <<
            setw(10) << result[2][0] << setw(10) << result[2][1] << setw(10) << result[2][2];
}