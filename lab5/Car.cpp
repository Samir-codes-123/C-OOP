#include <iostream>
#include <string>
using namespace std;
class Driver {
public:
    string skill;
    Driver(string s) :skill(s){}
};

class Car {
public:
    string condition;

    void drive(Driver  driver) {
        if (driver.skill == "good driver") {
            condition = "good";
        } else {
            condition = "bad";
        }
        cout << "Car condition: " << condition << "\n";
    }
};

int main() {
    Driver driver1("good driver");
    Car car;
    car.drive(driver1);
    Driver driver2("bad driver");
    car.drive(driver2);
    return 0;
}
