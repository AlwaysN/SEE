#include<iostream>
using namespace std;
class MyClass {
public:
    static int staticVariable;
    int nonStaticVariable; 
};
int MyClass:: staticVariable=0;

int main() {

    MyClass::staticVariable = 5;
    cout << "Static variable value: " << MyClass::staticVariable <<endl;

    MyClass obj;
    obj.nonStaticVariable = 10;
    cout << "Non-static variable value: " << obj.nonStaticVariable <<endl;

    return 0;
}


