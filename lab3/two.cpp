#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    
    //default constructor
    Person(){
        cout << "Default constructor"<< endl;
    }
    //Parameterized Constructor
    Person(string n, int a) : name(n), age(a) {
        cout << "Parameterized Constructor called for " << name << endl;
    }
    // Copy constructor
    Person(const Person &p) : name(p.name), age(p.age) {
        cout << "Copy constructor called for " << name << endl;
    }
};

int main() {
    // Using parameterized constructor
    Person p1("Samir", 19);
    // Using copy constructor
    Person p2 = p1;
    //default constructor
    Person p3;

    return 0;
}
