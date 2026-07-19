#include <iostream>
using namespace std;

class Test {
private:
    const int constantVar;
    static int staticVar;

public:
    Test(int val) : constantVar(val) {
        staticVar++;
    }

    void showValues() const {
        cout << "Constant Variable: " << constantVar << endl;
        cout << "Static Variable: " << staticVar << endl;
    }

    static void showStatic() {
        cout << "Static Variable: " << staticVar << endl;
    }
};

int Test::staticVar = 0;

int main() {
    Test obj1(10);
    obj1.showValues();

    Test obj2(20);
    obj2.showValues();

    Test::showStatic();

    return 0;
}

