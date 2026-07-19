#include <iostream>

const int len = 80;
using namespace std;
class employee
{

private:
char name[len];
int number; 
public:

void getdata()
{
cout<<"\nEnter last name :"; cin>>name;
cout<<"\nEnter number :"; cin>>number; }

void putdata() const
{
 cout<<"\nName :"<<name;
cout<<"\nNumber :"<<number; } 
};

class student
{
private:
char school[len];
char degree[len];
public:
void getedu()
{
cout<<"Name of School\n"; cin>>school;
cout<<"\nHighest degree acheived\n"; cin>>degree;
}
void putedu() const
{
cout<<"\nSchool : "<<school;
cout<<"\nDegree earned : "<<degree;
}
};

class manager : private employee,student
{
private:
char title[len];
double dues;
public:
void getdata()
{
employee::getdata();
cout<<"\nEnter title :";
cin>>title;
cout<<"\nEnter golf club dues :";
cin>>dues;

student ::getedu();
}
void putdata() const
{
employee ::putdata();
cout<<"\nTitle :"<<title;
cout<<"\nClub dues :"<<dues;
student::putedu();
} };
class scientist : private employee,student
{
private: int pubs; public:
void getdata()
{
employee::getdata();
cout<<"\nEnter number of publications :"; cin>>pubs;
student::getedu();
}
void putdata() const
{
employee ::putdata();
cout<<"\nNumber of publication :"<<pubs;
student::putedu(); } };
class laborer : public employee {};
int main()
{
manager m1,m2;
scientist s1;
laborer la;
cout<<"\nEnter the data for manager m1";
m1.getdata();
cout<<"\nEnter the data for manager m2";
m2.getdata();
cout<<"\nEnter the data for scientist";
s1.getdata();
cout<<"\nEnter the data for laborer";
la.getdata();
cout<<"\nManager 1 \n"; m1.putdata();
cout<<"\nManager 2 \n"; m2.putdata();
cout<<"\nScientist \n"; s1.putdata();
cout<<"\nLaborer \n"; la.putdata();
return 0;
}

