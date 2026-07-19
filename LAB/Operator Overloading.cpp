#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
    }

    // Operator overloading for +
    Point operator+ (Point p) {
    	Point temp;
    	temp.x = x + p.x;
    	temp.y = y + p.y;
    	
        return temp;
    }

    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1(2, 3);
    Point p2(4, 5);
    Point p3(6, 7);

    Point result = p1 + p2 + p3;  // Using overloaded + operator

    cout << "Result of Point Addition: ";
    result.display();

    return 0;
}

