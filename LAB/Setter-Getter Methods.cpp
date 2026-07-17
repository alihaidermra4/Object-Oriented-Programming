#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks;

public:
    // Setter Functions
    void setName(string n) {
        name = n;
        cout<<"Name have been stored"<<name<<endl;
    }
    void setRollNumber(int r) {
        rollNumber = r;
    }
    void setMarks(float m) {
        marks = m;
    }

    // Getter Functions
    int getName() {
        return name;
    }
    int getRollNumber() {
        return rollNumber;
    }
    float getMarks() {
        return marks;
    }

    // Display Function
    void display() {
        cout << "Student Name: " << getName() << endl;
        cout << "Roll Number: " << getRollNumber() << endl;
        cout << "Marks: " << getMarks() << endl;
    }
};

int main() {
    Student s1;
    
    // Using Setter functions to assign values
    s1.setName("Alice");
    s1.setRollNumber(101);
    s1.setMarks(89.5);

    // Displaying values using Getter functions
    s1.display();

    return 0;
}

