#include <iostream>
using namespace std;

class Grandfather {
protected:
    int protectedData;
public:
    Grandfather() {
        protectedData = 100;
    }
};

class Father : public Grandfather {
public:
	Father(){
	}
    void showData() {
        cout << "Accessing Protected Data in father class: " << protectedData << endl;
    }
};

class son : public Father {
public:
	son(){
	}

};

int main() {
    son obj;
    obj.showData(); // ? allowed


    // cout << obj.protectedData; // ? Error: protected member is inaccessible directly
}

