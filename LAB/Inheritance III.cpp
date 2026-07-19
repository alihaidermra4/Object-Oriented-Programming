#include<iostream>

using namespace std;

class Animal{
	private:
		int leg;
		int tails;
	public:	
		char gender;
		
		Animal(int l = 0, int t = 0, char g ='M'){
			leg = l;
			tails = t;
			gender = g;
		}
		
		void display(){
			cout<<leg<<" "<<tails<<" "<<gender;
		}
		
};

class Dog : public Animal{
	private:
		string noise;
		public:
			Dog(string n = "unknown"){
				noise = n;
			}
			
		void display(){
			
			cout<<noise;
		}	
};

class Cat : public Animal{
	private:
		string noise;
		public:
			Cat(string n = "unknown"){
				noise = n;
			}
			
			
};


int main(){
	Cat c1("Meow");
	
	c1.gender = 'f';
	c1.display();
}
