#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

class Mammal : public Animal {
public:
    void breathe() {
        cout << "Mammals breathe oxygen." << endl;
    }
};

class Dog : public Mammal {
public:
    void bark() {
        cout << "Dog barks: Woof Woof!" << endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat();
    myDog.breathe();
    myDog.bark();
    return 0;
}
