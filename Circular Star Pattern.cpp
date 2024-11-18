#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int radius;
    cout << "Enter the radius of the round pattern: ";
    cin >> radius;

    for (int i = -radius; i <= radius; i++) {
        for (int j = -radius; j <= radius; j++) {
            // Calculate distance from the center
            float distance = sqrt(i * i + j * j);
            if (distance <= radius) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
