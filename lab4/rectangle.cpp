#include <iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle(int l,int b):length(l),breadth(b){}
  friend int getArea(Rectangle r1);

};
int getArea(Rectangle r1){
    return r1.length*r1.breadth;
}

int main(){
    Rectangle r(5,6);
    int ans= getArea(r);
    cout <<"area is "<< ans << endl;
return 0;
}