#include <iostream>
using namespace std;

class Overload {
public:
    void display() {
        cout << "No parameters" << endl;
    }

    void display(int a) {
        cout << "Integer parameter: " << a << endl;
    }

    void display(double a) {
        cout << "Double parameter: " << a << endl;
    }

    void display(int a, double b) {
        cout << "Integer and Double parameters: " << a << ", " << b << endl;
    }
};

int main() {
    Overload obj;

    obj.display();
    obj.display(5);
    obj.display(3.14);
    obj.display(10, 2.5);

    return 0;
}

