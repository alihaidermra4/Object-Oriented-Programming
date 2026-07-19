#include <iostream>
using namespace std;

class Weight {
private:
    int kg;

public:
    Weight() {
        kg = 0;
    }

    Weight(int k) {
        kg = k;
    }

    Weight operator++() {
    	cout<<"\nfirst\n";
        ++kg;
        return *this;
    }

    Weight operator--() {
        cout<<"\nSecond\n";
		--kg;
        return *this;
    }

    Weight operator++(int) {
    	cout<<"\nThird\n";
        Weight temp = *this;
        kg++;
        return temp;
    }

    Weight operator--(int) {
    	cout<<"\nFourth\n";
        Weight temp = *this;
        kg--;
        return temp;
    }

    void display() {
        cout << "Weight is " << kg << " kg" << endl;
    }
};

int main() {
    Weight w1(10);
    Weight w2(20);
    Weight w3(30);

    ++w1;
    w2--;
    --w3;

    Weight w4, w5;

    w4 = ++w1;
    w5 = w2++;

    w1.display();
    w2.display();
    w3.display();
    w4.display();
    w5.display();

    return 0;
}

