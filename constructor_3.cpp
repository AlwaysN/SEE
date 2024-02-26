#include <iostream>
using namespace std;
class MyClass {
public:
    // Default constructor
    MyClass() {
        cout << "Default constructor called!" <<endl;
    }

    // Parameterized constructor
    MyClass(int value) {
        cout << "Parameterized constructor called with value:"<< value <<endl;
    }

    // Copy Constructor
    MyClass(const MyClass& other) {
        cout << "Copy constructor called!" <<endl;
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called!" <<endl;
    }
};
 
int main() {
    // Default constructor called
    MyClass obj1;

    // Parameterized constructor called
    MyClass obj2(100);

    // Copy constructor called
    MyClass obj3 = obj1;

    // Destructor called for all objects when they go out of scope
    
    return 0;
}
