#include <iostream>
using namespace std;

class Counter {
private:
    static int count; // Static variable declaration
public:
    static void increment() {
        count++;
    }
    static int getCount() {
        return count;
    }
};

// Definition of static variable outside the class
int Counter::count = 0;

int main() {
    Counter::increment(); // Access static method using ::
    Counter::increment();
    cout << "Count: " << Counter::getCount() << endl;
    return 0;
}
