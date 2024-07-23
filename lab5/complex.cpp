#include <iostream>
using namespace std;

class ComplexNumber {
private:
    double real;
    double imag;
    public:
    ComplexNumber(double r, double i) {
        real = r;
        imag = i;
    }
    void display() {
        cout << "Complex Number: " << real << " + " << imag << "i\n";
    }
    friend ComplexNumber add(ComplexNumber num1, ComplexNumber num2);
};

ComplexNumber add(ComplexNumber num1, ComplexNumber num2) {
   return ComplexNumber(num1.real + num2.real, num1.imag + num2.imag);
   
}

int main() {
    ComplexNumber num1(3.4, 5.6);
    ComplexNumber num2(1.2, 3.4);
    ComplexNumber sum = add(num1, num2);
    sum.display();
    return 0;
}
