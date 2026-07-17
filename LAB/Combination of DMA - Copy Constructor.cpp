#include <iostream>
#include<string>
using namespace std;

class Rectangle {
private:
	double length;
	double width;
	string *unit;
public:
	Rectangle(double l =1, double w = 1){
		length = l;
		width = w;
	}
	Rectangle(double l =1, double w = 1, string u = "cm"){
		length = l;
		width = w;
		unit = new string (u);
	}
	
	// copy constructor
	Rectangle (Rectangle &obj){
		length = obj.length;
		width = obj.width;
		unit = obj.unit;
	}	
	
	void modify(double l, double w, string u){
		cout<<"\nModifing"<<endl;
		length = length + l;
		width = width + w;
		unit = new string(u);
	}
	
	void display(){
		cout<<"\n Area is "<<length * width <<" "<<*unit<<endl;
	}
	
	~Rectangle(){
	cout<<"destructor called for length "<<length <<" and width "<<width<<" and unit "<<*unit<<endl;
		delete unit;
	}	
};

int main(){
	Rectangle r1(5,4,"km");
	r1.display();
	Rectangle *r3 = new Rectangle(12,12,"mm");
	
	cout<<"Creating r2 object\n";
	Rectangle r2 = r1;
	cout<<"\nDisplaying r2 area\n";
	r2.display();
	
	r2.modify(4,5,"cm");
	cout<<"\nDisplaying r2 area\n";
	r2.display();
	
	cout<<"\nDisplaying r1 area\n";
	r1.display();

	delete r3;	
}
	
	
	
