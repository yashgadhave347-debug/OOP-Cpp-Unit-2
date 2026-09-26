// Program 8: Constructor and Destructor Order
// Demonstrates the order in which constructors and destructors are called
// in an inheritance hierarchy

#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base constructor\n";
    }

    ~Base() {
        std::cout << "Base destructor\n";
    }
};

class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived constructor\n";
    }

    ~Derived() {
        std::cout << "Derived destructor\n";
    }
};

int main() {
    Derived object;
    return 0;
}
