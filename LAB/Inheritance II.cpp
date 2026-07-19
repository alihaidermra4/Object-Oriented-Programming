#include <iostream>
using namespace std;
class A
{
public:
~A()
{
cout<<"Destructor of class A called\n";
}
};
class B : public A
{
public:
~B()
{
cout<<"Destructor of class B called\n";
}
};
class C : public B
{
public:
~C()
{
cout<<"Destructor of class C called\n";
}
};
int main()
{
C *c1= new C;
delete c1;
return 0;
}
