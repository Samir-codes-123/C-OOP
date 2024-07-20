#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber; // Account number
    double balance;   // Account balance

public:
    // Constructor to initialize account number and balance
    BankAccount(int accNum, double initialBalance)
        : accountNumber(accNum), balance(initialBalance) {}

    // Method to deposit money
    void deposit(double amount) {
        balance += amount;
    }

    // Method to withdraw money
    void withdraw(double amount) {
        balance -= amount;
    }

    // Method to get the balance
    double getBalance() {
        return balance;
    }

    // Method to get the account number (optional)
    int getAccountNumber() {
        return accountNumber;
    }
};

int main() {
    BankAccount myAccount(123456789, 1000.00);

    // Display initial balance
    cout << "Account Number: " << myAccount.getAccountNumber() << endl;
    cout << "Initial Balance: $" << myAccount.getBalance() << endl;

    // Deposit money
    myAccount.deposit(500.00);
    cout << "Balance after deposit: $" << myAccount.getBalance() << endl;

    // Withdraw money
    myAccount.withdraw(200.00);
    cout << "Balance after withdrawal: $" << myAccount.getBalance() << endl;

    return 0;
}
