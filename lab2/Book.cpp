#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;
    int pages;

public:
    // Constructor to initialize the book details
    Book(const string& t, const string& a, double p, int pg)
        : title(t), author(a), price(p), pages(pg) {};
  // Getter for title
    string getTitle()  {
        return title;
    }// Getter for author
    string getAuthor()  {
        return author;
    } // Getter for price
    double getPrice()  {
        return price;
    }// Getter for pages
    int getPages()  {
        return pages;
    }
};

int main() {
    Book myBook("Mahabharat", "Ganesh", 1500.99, 328);
     // Display the initial book details
    cout << "Title: " << myBook.getTitle() << endl;
    cout << "Author: " << myBook.getAuthor() << endl;
    cout << "Price: Rs" << myBook.getPrice() << endl;
    cout << "Pages: " << myBook.getPages() << endl;
    return 0;
}
