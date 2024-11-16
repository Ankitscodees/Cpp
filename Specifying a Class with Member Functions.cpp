#include <iostream>
using namespace std;

// Class declaration
class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle(double l, double w);

    // Function to calculate area (defined outside the class)
    double calculateArea();

    // Function to calculate perimeter (defined inside the class)
    double calculatePerimeter() {
        return 2 * (length + width);
    }

    // Function to display details (defined outside the class)
    void displayDetails();
};

// Class member function definitions outside the class
Rectangle::Rectangle(double l, double w) {
    length = l;
    width = w;
}

double Rectangle::calculateArea() {
    return length * width;
}

void Rectangle::displayDetails() {
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Area: " << calculateArea() << endl;
    cout << "Perimeter: " << calculatePerimeter() << endl;
}

// Main function
int main() {
    // Creating an object of Rectangle
    Rectangle rect(10.5, 5.2);

    // Displaying rectangle details
    rect.displayDetails();

    return 0;
}
