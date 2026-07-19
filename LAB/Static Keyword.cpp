#include <iostream>
using namespace std;

class Counter {
private:
    int count;
    static int totalCount;

public:
    Counter(int count) {
        this->count = count;
        totalCount++;
    }

    void showCount() {
        cout << "Instance Count: " << count << endl;
    }

    void showTotalCount() {
        cout << "Total Objects Created: " << totalCount << endl;
    }

    ~Counter() {
        totalCount--;
    }
};

int Counter::totalCount = 0;

int main() {
    Counter c1(5);

    c1.showCount();
    


    return 0;
}

