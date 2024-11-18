#include <iostream>
using namespace std;

class MyClass;

int addFive(MyClass&);

class MyClass {
private:
public:
	int privateData;
    MyClass() : privateData(0) {}

    friend int addFive(MyClass&);
};

int addFive(MyClass& obj) {
    obj.privateData += 5;
    return obj.privateData;
}

int main() {
    MyClass myObject;
    cout << "Initial privateData: " << myObject.privateData << endl;

    cout << "After adding 5: " << addFive(myObject) << endl;

    return 0;
}
