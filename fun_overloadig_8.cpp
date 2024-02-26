#include <iostream>
using namespace std;
// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int num1 = 5, num2 = 10, num3 = 15;

    // Call to the first overloaded function
    cout << "Sum :"<< add(num1, num2) << endl;

    // Call to the second overloaded function
    cout << "Sum :"<< add(num1, num2, num3) <<endl;

    return 0;
}
