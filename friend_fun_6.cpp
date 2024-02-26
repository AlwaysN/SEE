#include <iostream>
using namespace std;
class FriendClass;

class MyClass {
private:
    int privateData;

public:
    MyClass() : privateData(56) {}

    friend void friendFunction(const MyClass& obj);

    friend class FriendClass;
};
void friendFunction(const MyClass& obj) {
    cout << "Friend Function accessing private data: " << obj.privateData <<endl;
};
class FriendClass {
public:
    void accessPrivateData(const MyClass& obj) {
        cout << "FriendClass accessing private data:! " << obj.privateData << endl;
    }
};

int main() {
    MyClass myObj;
    FriendClass friendObj;
    friendFunction(myObj);
    friendObj.accessPrivateData(myObj);

    return 0;
}

