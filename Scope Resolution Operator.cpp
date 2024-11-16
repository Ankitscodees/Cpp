#include <iostream>
using namespace std;

int num = 100; // Global variable

int main() {
    int num = 50; // Local variable
    cout << "Local num: " << num << endl;       // Access local variable
    cout << "Global num: " << ::num << endl;   // Access global variable using ::
    return 0;
}
