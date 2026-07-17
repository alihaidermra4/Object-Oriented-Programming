#include <iostream>
using namespace std;

class Rectangle {
	private:
    	int length, width;

public:
	Rectangle(int l=0) {
        length = l;
        width = 0;
        cout << "Constructor with 1 parameters: Length = " << length << ", Width (Default Value) = " << width << endl;
    }
        Rectangle(int l=0, int w=0) {
        length = l;
        width = w;
        cout << "Constructor with 2 parameters: Length = " << length << ", Width = " << width << endl;
    }

    void displayArea() {
        cout << "Area: " << length * width << endl;
    }
    ~Rectangle() {
        cout << "Destructor called: Length = " << length << ", Width = " << width << endl;
    }
};

int main() {
    Rectangle r1(10); 
	Rectangle r2(10,5);     
	r1.displayArea();
	r2.displayArea();
}

