#include<iostream>
using namespace std;

class Myclass{
    private:
    int name;
    int y;
    int z;
    
    public:
    void set(int name,int y,int z)
    {
        this->name=name;
        this->y=y;
        this->z=z;
    }
    
    void print()
    {
        cout<<"fjhkjhhi"<<name<<endl;
        cout<<"the value of y:"<<y<<endl;
        cout<<"the value of z:"<<z<<endl;
        
        
    }
};

int main()
{
    Myclass obj;
    obj.set(20,7,8); 
    obj.print();
    return 0;
}