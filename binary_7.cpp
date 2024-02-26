#include <iostream>
using namespace std;
class MyNumber {
private:
    int value;

public:
    // Constructor
    MyNumber(int val) : value(val) {}

    // Unary operator overloading for negation (-)
    MyNumber operator-() {
        return MyNumber(-value);
    }

    // Binary operator overloading for addition (+)
    MyNumber operator+(const MyNumber& other) {
        return MyNumber(value + other.value);
    }

    // Function to display the value
    void display() {
        cout  <<"Value: " << value <<endl;
    }};

int main() {
    // Creating instances of MyNumber
    MyNumber num1(5);
    MyNumber num2(10);

    // Unary operator overloading
    MyNumber resultUnary = -num1;
    cout << "Unary Operator Overloading:" <<endl;
    resultUnary.display();

    // Binary operator overloading
    MyNumber resultBinary = num1 + num2;
    cout << "Binary Operator Overloading:" <<endl;
    resultBinary.display();

    return 0;
}
