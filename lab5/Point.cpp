#include <iostream>
using namespace std;

class Point {
private:
    double x;
    double y;
public:
     Point(double a, double b):x(a),y(b){}
    Point midpoint(Point other) {//single object also works
       return Point((x + other.x) / 2, (y + other.y) / 2);
    }
    void display() {
        cout << "Point: (" << x << ", " << y << ")\n";
    }
};

int main() {
    Point p1(2.0, 3.0);
    Point p2(4.0, 7.0);
    Point mid = p1.midpoint(p2);
    mid.display();
    return 0;
}
