#include <iostream>
using namespace std;
class A
{
public:
A()
{
cout<<"Constructor of class A called\n";
}
};
class B : public A
{
public:
B()
{
cout<<"Constructor of class B called\n";
}
};
class C : public B
{
public:
C()
{
cout<<"Constructor of class C called\n";
}
};
int main()
{
C c1;
return 0;
}
