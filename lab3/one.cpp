#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a) : name(n), age(a) {
        cout << "Constructor called for " << name << endl;
    }

    // Destructor
    ~Person() {
        cout << "Destructor called for " << name << endl;
    }

    // Function to display the person's information
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
