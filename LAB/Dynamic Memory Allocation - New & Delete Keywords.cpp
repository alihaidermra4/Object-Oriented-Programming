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

    void updateValues(double l, double w) {
        *length += l;
        *width += w;
    }

    void displayArea() {
        cout << "Area: " << (*length) * (*width) << endl;
    }

    ~Rectangle() {
        cout << "\nDestructor Called for Length: " << *length << " Width: " << *width << endl;
        delete length;
        delete width; 
    }
};

int main() {
    Rectangle r1(4, 5);  // Normal constructor
    r1.displayArea();

    cout << "\nUpdating r1...\n";
    r1.updateValues(5, 5);
    r1.displayArea();
    return 0;
} 
