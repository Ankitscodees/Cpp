#include <iostream>

namespace NamespaceA {
    void display() {
        std::cout << "Inside NamespaceA" << std::endl;
    }
}

int main() {
    NamespaceA::display(); // Access function using ::
    return 0;
}
