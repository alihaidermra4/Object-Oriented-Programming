#include <iostream>
using namespace std;

class Student {
public:
    string name;
    Student(string n="unknown") : name(n) {}
};

class Course {
public:
    Student* student; 
    Course(Student* s) {
        student = s;
    }

    void showStudent() {
        cout << "Student: " << student->name << endl;
    }
};

int main() {
    Student s1();
    Course c1(&s1);     
    c1.showStudent();   
    return 0;
}

