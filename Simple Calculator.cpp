#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Addition
    int sum = num1 + num2;
    cout << "Sum: " << sum << endl;

    // Subtraction
    int difference = num1 - num2;
    cout << "Difference: " << difference << endl;

    // Multiplication
    int product = num1 * num2;
    cout << "Product: " << product << endl;

    // Division (with float result)
    float quotient = static_cast<float>(num1) / num2;
    cout << "Quotient: " << quotient << endl;

    // Modulus
    int remainder = num1 % num2;
    cout << "Modulus: " << remainder << endl;

    return 0;
}
