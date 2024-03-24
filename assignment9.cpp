#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    
    double getReal() const { return real; }
    double getImag() const { return imag; }

    // Overload binary operator using friend function
    friend Complex operator+(const Complex& c1, const Complex& c2);
};


Complex operator+(const Complex& c1, const Complex& c2) {
    return Complex(c1.getReal() + c2.getReal(), c1.getImag() + c2.getImag());
}

int main() {
    Complex c1(3.0, 4.0);
    Complex c2(1.0, 2.0);
    Complex c3 = c1 + c2;

    cout << "c1 = (" << c1.getReal() << ", " << c1.getImag() << ")" << endl;
    cout << "c2 = (" << c2.getReal() << ", " << c2.getImag() << ")" << endl;
    cout << "c3 = (" << c3.getReal() << ", " << c3.getImag() << ")" << endl;

    return 0;
}