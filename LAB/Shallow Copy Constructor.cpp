#include <iostream>
using namespace std;

class Rectangle {
private:
    double *length;
    double *width;

public:
    // Constructor (Dynamic Memory Allocation)
    Rectangle(double l = 1, double w = 1) {
        length = new double(l);
        width = new double(w);
    }

    // **Shallow Copy Constructor**
    Rectangle(Rectangle &r) {
        length = r.length;  // Copy pointer, NOT memory
        width = r.width;
        cout << "Shallow Copy Constructor Called\n";
    }

    void updateValues(double l, double w) {
        *length += l;
        *width += w;
    }

    void displayArea() {
        cout << "Area: " << (*length) * (*width) << endl;
    }

    ~Rectangle() {
        cout << "\nDestructor Called for Length: " << *length << " Width: " << *width << endl;
        delete length;  // Memory is freed
        delete width;   // This will cause a double delete error when r2 is destroyed
    }
};

int main() {
    Rectangle r1(4, 5);  // Normal constructor
    r1.displayArea();

    Rectangle r2 = r1;   // **Shallow Copy Constructor is called**
    r2.displayArea();

    cout << "\nUpdating r2...\n";
    r2.updateValues(4, 5);
    r2.displayArea();

    cout << "\nChecking r1 (Shallow Copy Issue)...\n";
    r1.displayArea();  // r1 also changes because of shared memory!


    Rectangle r3 = r1;   // **Shallow Copy Constructor is called**
    r3.displayArea();

    cout << "\nUpdating r3...\n";
    r3.updateValues(5, 5);
    r3.displayArea();

    cout << "\nChecking r1 (Shallow Copy Issue)...\n";
    r1.displayArea();  // r1 also changes because of shared memory!

    return 0;
} 
