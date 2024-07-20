#include <iostream>
using namespace std;

class Point {
private:
    int x; // X-coordinate
    int y; // Y-coordinate

public:
    // Constructor to initialize x and y
    Point(int xValue, int yValue) : x(xValue), y(yValue) {}

    // Getter for x-coordinate
    int getX()  {
        return x;
    }

    // Getter for y-coordinate
    int getY()  {
        return y;
    }
};

int main() {
    Point p(10, 20);
    int xValue = p.getX();
    int yValue = p.getY();
    cout << "X: " << xValue << endl;
    cout << "Y: " << yValue << endl;

    return 0;
}
