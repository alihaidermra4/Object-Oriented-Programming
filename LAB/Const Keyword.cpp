#include <iostream>
using namespace std;

class Test {
private:
    int constantVar;

public:
    Test(int val){
	 constantVar = val;
	 constantVar += 10;
}

    void showValue() const {
        cout << "Constant Variable: " << constantVar << endl;
        
    }
};

int main() {
    Test obj(10);

    obj.showValue();

    return 0;
}

