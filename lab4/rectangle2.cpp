#include <iostream>
#define pi 3.14
using namespace std;

class Rectangle;// circle class lai ref ko lagi
class Circle {
private:
    float radius;
public:
    Circle(float r) : radius(r) {}
    float cArea() {
        return pi * (radius * radius);
    }
    friend void compare(Circle c1, Rectangle r1);
};

class Rectangle {
private:
    float length;
    float breadth;
public:
    Rectangle(float l, float b) : length(l), breadth(b) {}
    float rArea() {
        return length * breadth;
    }
    friend void compare(Circle c1, Rectangle r1);
};

void compare(Circle c1, Rectangle r1) {
    float cir = c1.cArea();
    float rec = r1.rArea();
    cout << "circle area "<< cir << endl;
    
    if (cir > rec) {
        cout << "Circle area is greater than rectangle" << endl;
    } else {
        cout << "Rectangle area is greater than Circle" << endl;
    }
}

int main() {
    Circle c1(5);
    Rectangle r1(4, 5);  
    compare(c1, r1);
    return 0;
}
