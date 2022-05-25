#include <iostream>
#include <cmath>
using namespace std;

class Complex {
private:
    int real, imag;
public:
    Complex();
    Complex(double, double);
    double getReal() {
        return real;
    }
    double getImaginary() {
        return imag;
    }
    void setReal(double number) {
        real = number;
        return;
    }
    void setImaginary(double number) {
        imag = number;
        return;
    }
    Complex getCongugate() {
        return {getReal(), -getImaginary()};
    }
    double getModulus() {
        double thisReal = getReal();
        double thisImag = getImaginary();
        return sqrt(thisReal*thisReal + thisImag*thisImag);
    }

friend ostream& operator << (ostream& output, const Complex& complex);
};

ostream& operator << (ostream& output, const Complex& complex) {
output << complex.real << "+" << complex.imag << "i";
return output;
}

Complex::Complex() {
    real = 0;
    imag = 0;
}

Complex::Complex(double a, double b) {
    real = a;
    imag = b;
}

int main() {
    cout << Complex(1,1);
}