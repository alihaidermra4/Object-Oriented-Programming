#include<iostream>
using namespace std;

class Employee
{
    private:
        int a, b;
	
	protected:
		int c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1){
            a = a1;
            b = b1;
            c = c1;
        }
        int getdata(){
        	cout<<"In the getdata body\n";
        	return a;
		}
        void displayValue(){
            cout<<"The value of a is "<<getdata()<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

int main(){
    Employee e1;
    e1.d = 34;
    e1.e = 89;
    e1.setData(1,2,4);
    e1.displayValue();
    return 0;
}
