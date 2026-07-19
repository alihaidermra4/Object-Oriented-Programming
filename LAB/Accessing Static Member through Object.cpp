#include<iostream>
#include<string>
using namespace std;

class ABC{
	public:
		int ind;
		string msg;
		static int age;
	
		ABC(int i, string m){
			ind = i;
			msg = m;
		}
		static void setAge(int a) {
			age = a;
		}
		static void getAge(){
			cout<<"\nAge : "<<age;
		}
	 friend void showData(ABC &obj);
};

 void showData(ABC &obj){
	cout<<obj.ind<<" "<<obj.msg<<endl;
	
}
int ABC::age(300);
int main(){
	ABC a1(1, "LOL");
	showData(a1);
	ABC::setAge(10);
	cout<<" \n"<<a1.age;
	
}
