#include <iostream>
using namespace std;

class Calculator {
private:
    int number1, number2;

public:
    // Function to set the numbers
    void setNumbers(int num1, int num2) {
        number1 = num1;
        number2 = num2;
    }

    // Function to calculate the sum
    int calculateSum() {
        return number1 + number2;
    }

    // Function to display the sum (calls calculateSum)
    void displaySum() {
        int sum = calculateSum(); // Nested function call
        cout << "The sum of " << number1 << " and " << number2 << " is: " << sum << endl;
    }
};

int main() {
    Calculator calc;

    // Setting numbers
    calc.setNumbers(10, 20);

    // Displaying the sum
    calc.displaySum();

    return 0;
}
