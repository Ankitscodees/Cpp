#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> n;

    int firstTerm = 0, secondTerm = 1;
    cout << "Fibonacci series up to " << n << " terms: ";

    while (n > 0) {
        cout << firstTerm << " ";
        int nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
        n--;
    }

    cout << endl;
    return 0;
}
