#include <iostream>
#include <string>
using namespace std;
class Person{
    private:
    string name;
    int age;
    public:
    Person(string n,int a):name(n), age(a){}
    
    friend void compareAge(Person p1,Person p2);

};
void compareAge(Person p1,Person p2){
    if(p1.age>p2.age){
        cout<< p1.name << " is older than " << p2.name << endl;
    }else{
        cout<<p2.name <<  " is older than "<< p1.name << endl;
    }
}
int main(){
    Person p1("Ram",20),p2("Sita",18);
    compareAge(p1,p2);
}
