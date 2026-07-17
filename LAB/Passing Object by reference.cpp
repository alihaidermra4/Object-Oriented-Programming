#include<iostream>
#include<string>
using namespace std;

class USERACCOUNT{
	private:
		string UserName;
		float balance;
		
	public:
		USERACCOUNT(string s="Unknown", float f = 0.0){
			UserName = s;
			balance = f;
		}
		
		void Transfer(USERACCOUNT &ua, float amount){
			if ( ua.balance > amount){
				ua.balance = ua.balance - amount;
				balance = balance + amount;
			}
			else{
				cout<<"The amount exceed the balance";
			}
		}
		
		void display(){
			cout<<UserName<<" : "<<balance<<endl;
		}
		
			
};

int main(){
	USERACCOUNT acc1("Ali", 1000);
	acc1.display();
	USERACCOUNT acc2("Abrar", 800);
	acc2.display();
	acc1.Transfer(acc2, 300);
	acc1.display();
	acc2.display();
}