#include <iostream>
using namespace std;

class Address {
public:
	string city; 
    Address(string c) : city(c) {}  
};

class Person {
private:
    Address address;  

public:
    Person(string c) : address(c) {}  

    void showAddress() {
        cout << "Lives in: " << address.city << endl;
    }
};

int main() {
    Person p("Lahore");
    p.showAddress();  
    return 0;
}


