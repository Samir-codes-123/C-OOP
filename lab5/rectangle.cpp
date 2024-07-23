#include <iostream>
#include <string>
using namespace std;
class Rectangle {
public:
    int length;
    int breadth;
    string color;

    Rectangle(int l, int b): length(l),breadth(b) { }
};

void paint(Rectangle& rect, string color) {
    rect.color = color;
    cout << "Rectangle of length " << rect.length << " and breadth " << rect.breadth << " is painted " << rect.color << ".\n";
}

int main() {
    Rectangle rect(10, 5);
    paint(rect, "red");
    return 0;
}
