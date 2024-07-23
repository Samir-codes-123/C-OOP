#include <iostream>
#include <string>
using namespace std;

class BankAcc{
    private:
    string name;
    float balance;
   
    public:
    BankAcc(float b, string n): balance(b),name(n){}
    friend void transfer(BankAcc & sender, BankAcc & reciver,float amount);
};
 
void transfer(BankAcc & sender, BankAcc & reciver,float amount){
    cout << "intial amount "<< reciver.balance<<endl;
    cout <<amount << " has been transfered " << reciver.name << " from " << sender.name<< endl;
    sender.balance-= amount;
    reciver.balance+=amount:
    cout << "Final amount "<< reciver.balance<<endl;
}

int main(){
    BankAcc b1("Samir",1000),b2("Ram",500);
    transfer(b1,b2,300);
    return 0;
}