#include <iostream>
#include <cmath>
using namespace std;

class Complex {
private:
    int real, imag;
public:
    Complex();
    Complex(double, double);
    Complex(int, int);
    static bool isPrime(int p) {
        for (int d = 2; d < p; d++) {
            if (p % d == 0) {
                return false;
            }
        }
        return true;
    }
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

Complex::Complex(int a, int b) {
    real = a;
    imag = b;
}

class Guassian: public Complex {
private:
    int real = getReal();
    int imag = getImaginary();
public:
    Guassian(int a, int b): Complex(a, b) {};
    bool isGuassianPrime() {
        if (real == 0) {
            if (Complex::isPrime(abs(imag)) && abs(imag) % 4 == 3) {
                return true;
            }
        } else if (imag == 0) {
            if (Complex::isPrime(abs(real)) && abs(real) % 4 == 3) {
                return true;
            }
        } else {
            int aSquaredPlusBSquared = real*real + imag*imag;
            if (Complex::isPrime(aSquaredPlusBSquared)) {
                if (aSquaredPlusBSquared % 4 != 3) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main () {
    cout << Guassian(-5, -4).isGuassianPrime();
}