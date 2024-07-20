#include <iostream>
using namespace std;

class ComplexNumber {
private:
    double real;      // Real part of the complex number
    double imaginary; // Imaginary part of the complex number

public:
    // Constructor to initialize the complex number
    ComplexNumber(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}

    // Setter for real part
    void setReal(double r) {
        real = r;
    }

    // Setter for imaginary part
    void setImaginary(double i) {
        imaginary = i;
    }

    // Getter for real part
    double getReal()  {
        return real;
    }

    // Getter for imaginary part
    double getImaginary()  {
        return imaginary;
    }
};

int main() {
    // Create a ComplexNumber object
    ComplexNumber num(3.0, 4.0);

    // Display initial values
    cout << "Complex Number: " << num.getReal() << " + " << num.getImaginary() << "i" << endl;

    // Modify the values
    num.setReal(5.0);
    num.setImaginary(6.0);

    // Display updated values
    cout << "Updated Complex Number: " << num.getReal() << " + " << num.getImaginary() << "i" << endl;

    return 0;
}
