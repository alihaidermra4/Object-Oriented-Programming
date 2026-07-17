#include <iostream>
using namespace std;

class Rectangle {
private:
    double length, width;

public:
    // Default Constructor
    Rectangle(){
    	length = 0;
    	width = 0;
	}
	
	void updateValues(double l, double w){
		length = length+l;
		width = width+w;
		cout<<"\nValues updated.\n";
	}
	
    void displayArea() {
        cout << "Area: " << length * width << endl;
    }
    
    ~Rectangle(){
    	cout<<"\nDestructor called";
	}
};

int main() {
    Rectangle r1(); 
    r1.displayArea();
    r1.updateValues(10,5);
    r1.displayArea();
		
    return 0;
}

