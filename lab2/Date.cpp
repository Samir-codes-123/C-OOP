#include <iostream>
using namespace std;

class Date {
private:
    int day;   // Day of the date
    int month; // Month of the date
    int year;  // Year of the date

public:
    // Constructor to initialize the date
    Date(int d, int m, int y) : day(d), month(m), year(y) {}
    // Setter for day
    void setDay(int d) {
        day = d;
    } // Setter for month
    void setMonth(int m) {
        month = m;
    } // Setter for year
    void setYear(int y) {
        year = y;
    } // Getter for day
    int getDay() {
        return day;
    } // Getter for month
    int getMonth() {
        return month;
     // Getter for year
    int getYear() {
        return year;
    }
}};
int main() {
    Date today(20, 7, 2024);
    // Display initial date
    cout << "Date: " << today.getDay() << "/" << today.getMonth() << "/" << today.getYear() << endl;
      // Update the date
    today.setDay(21);
    today.setMonth(8);
    today.setYear(2025);
     // Display updated date
    cout << "Updated Date: " << today.getDay() << "/" << today.getMonth() << "/" << today.getYear() << endl;

    return 0;
}
