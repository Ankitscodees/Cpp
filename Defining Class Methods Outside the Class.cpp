#include <iostream>
using namespace std;

class MyClass {
public:
    void display(); // Declaration
};

// Using scope resolution operator to define the function
void MyClass::display() {
    cout << "Hello from MyClass!" << endl;
}

int main() {
    MyClass obj;
    obj.display();
    return 0;
}
