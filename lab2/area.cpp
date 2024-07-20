#include <iostream>
using namespace std;
#define PI 3.14 // Define the constant value for pi

class Circle {
private:
    double radius; // Radius of the circle
public:
    // Constructor to initialize the radius
    Circle(double r) : radius(r) {}

    // Method to calculate the circumference
    double getCircumference() const {
        return 2 * PI * radius;
    }

    // Method to calculate the area
    double getArea() const {
        return PI * radius * radius;
    }
};

int main() {
    Circle c(5.0);
    double circumference = c.getCircumference();
    double area = c.getArea();
    cout << "Circumference: " << circumference << endl;
    cout << "Area: " << area << endl;

    return 0;
}
