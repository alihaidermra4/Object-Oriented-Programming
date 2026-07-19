#include <iostream>
using namespace std;

class Rectangle {
private:
    double *length;
    double *width;

public:
    Rectangle(double l = 1, double w = 1) {
        length = new double(l);
        width = new double(w);
    }

    Rectangle(const Rectangle& r) {
        length = new double(*r.length);
        width = new double(*r.width);
        cout << "Deep Copy Constructor Called\n";
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
    Rectangle r1(4, 5);
    r1.displayArea();

    Rectangle r2 = r1;
    r2.displayArea();

    cout << "\nUpdating r2...\n";
    r2.updateValues(4, 5);
    r2.displayArea();
	delete r2;
    cout << "\nChecking r1...\n";
    r1.displayArea();

    Rectangle r3 = r1;
    r3.displayArea();

    cout << "\nUpdating r3...\n";
    r3.updateValues(5, 5);
    r3.displayArea();

    cout << "\nChecking r1...\n";
    r1.displayArea();

    return 0;
}

