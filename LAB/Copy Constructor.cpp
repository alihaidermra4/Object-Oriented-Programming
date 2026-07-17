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
	// Default Parameterized Constructor
    Rectangle(double l = 1, double w = 1) {
        length = l;
        width = w;
    }

	// When no copy constructor is found, compiler supplies its own copy constructor
    // Copy Constructor
	Rectangle(Rectangle &r) {
		cout<<"\nValue of rectangle passed through reference : "<<r.length<<endl<<r.width;
    	cout<<"\nBefore copying values from passed oject, actual values of object which called are : \n"<<length<<endl<<width;
	    length = r.length;
    	width = r.width;
    	cout << "\n Copy Constructor Called\n";
    	cout<<"After updating the values are : \n"<<length<<endl<<width;
    }
	
	void updateValues(double l, double w){
		length = length+l;
		width = width+w;
	}
	
    void displayArea() {
        cout << "Area: " << length * width << endl;
    }
    
    ~Rectangle(){
    	cout<<"\nDestructor called";
	}
};

int main() {
    Rectangle r1(4, 5);  // Normal constructor

	
    Rectangle r2 = r1;   // Copy constructor is called

	

		
    return 0;
}

