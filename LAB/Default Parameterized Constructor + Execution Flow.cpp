#include<iostream>
using namespace std;

class Rectangle{
	private:
		double length;
		double width;
		
	public: 
	Rectangle(int l =0, int w=0){
		length = l;
		width = w;
		
	}
	
	void displayarea(){
		cout<<"Area of the rectangle is :"<<length * width<<endl;
	}
	
	~Rectangle(){
		cout<<"Destructor called for : length ="<<length<<" and width = "<<width<<endl;
	}
};

void constructordestructor(){
	cout<<"In other function\n";
	Rectangle r1;
	Rectangle r2(4);
	Rectangle r3(4,3);
	

	r1.displayarea();
	r2.displayarea();
	r3.displayarea();
	

	
	cout<<"returning to main function\n";
}
int main(){
	cout<<"In main Function"<<endl;
	constructordestructor();
	cout<<"Terminating main function\n";
}
