include <iostream>
using namespace std;

// Inline function definition
inline int square(int num) {
    return num * num;
}

int main() {
    int a = 5, b = 10;

    // Inline function calls
    cout << "Square of " << a << " is " << square(a) << endl;
    cout << "Square of " << b << " is " << square(b) << endl;

    return 0;
}
