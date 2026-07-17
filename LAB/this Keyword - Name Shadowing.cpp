#include <iostream>
using namespace std;
class Counter
{
	private:
	int count;
    static int totalCount;
	
	public:
	
	Counter(int c = 0) {
        this->count = c;
        totalCount++;
    }

    void showCount() {
        cout << "Instance Count: " << this->count << endl;
    }

    static void showTotalCount() {
        cout << "Total Objects Created: " << totalCount << endl;
    }

    ~Counter() {
        totalCount--;
    }
};

void constructordestructor()
{
	Counter c1(5), c2(10);

    c1.showCount();
    c2.showCount();

    Counter::showTotalCount();
}

int Counter::totalCount = 0;

int main() {
	constructordestructor();
	Counter::showTotalCount();
    Counter c3(15);
    c3.showCount();

    Counter::showTotalCount();


    return 0;
}

