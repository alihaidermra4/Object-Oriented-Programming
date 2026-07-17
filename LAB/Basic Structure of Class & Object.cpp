#include<iostream>
#include<cstring>
using namespace std;
class Gradebook
    {
    public:
    	string abc;
    void displaymessage (string coursename)
    {
    cout<<"Welcome to the Gradebook of "<<coursename<<" !\n";
    strcpy(abc,coursename);
    cout<<abc;
    }
    };
int main()
{
    Gradebook obj;
    string mycoursename;
    cout<<"Enter the name of your course\n";
    cin>>mycoursename;
    obj.displaymessage(mycoursename);
    return 0;
}
