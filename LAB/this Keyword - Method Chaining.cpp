#include<iostream>
using namespace std;

class Square{
	private:
		int length;
		int area;
	
	public:
		Square(int length=0, int area = 0){
			this->length = length;
			this->area = area;
		}
		
		Square& areaCal(){
			area = length * length;
			return *this;
		}
		
		Square& display(){
		cout<<"Area of this sqaure was : "<<area;
		return *this;
		}
		
	
};

int main(){
	Square s(4);
	s.areaCal().display();
	
	return 0;
	
}