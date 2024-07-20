#include <iostream>
using namespace std;
class Person{
    
    private:
    string name;
    int age;
    public:
    // constructor to set values
    Person(string n, int a):name(n),age(a){};
    // methods to get values
    string getName(){
     return name;   
    }
    int getAge() {
        return age;
    }
};
int main() {
   Person p1("Samir",19);
   string name= p1.getName();
   int age = p1.getAge();
   cout << "Name: " << name << endl;
   cout << "age: "<< age << endl;

    return 0;
}