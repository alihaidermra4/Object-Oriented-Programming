#include <iostream>
using namespace std;

class Engine {
	string enginename;
public:
	Engine(string e): enginename(e){}
	 
    void start() {
        cout << "Engine started : " <<enginename<< endl;
    }
};

class Car {
public:
    void useEngine(Engine& eng) {
        eng.start();
    }
};

int main() {
    Engine e1("vtec"), e2("2jz");
    Car c;
    c.useEngine(e1);  
    return 0;
}

