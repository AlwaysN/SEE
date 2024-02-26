#include <iostream>
using namespace std;
// Base class
class Animal {
public:
    // Virtual function speak
    virtual void speak() {
        cout << "Animal speaks" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Overriding the speak method of the base class
    void speak() override {
        cout << "Dog barks" <<endl;
    }
};

int main() {
    Animal* animalPtr;
    Animal animal;
    Dog dog;

    // Pointing to the base class object
    animalPtr = &animal;
    // Calls the base class method
    animalPtr->speak();

    // Pointing to the derived class object
    animalPtr = &dog;
    // Calls the overridden method of the derived class
    animalPtr->speak();

    return 0;
}
