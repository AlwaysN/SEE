#include <iostream>
using namespace std;
class Student{
    private:
    string name;
    int usn;
    int marks;

    public:
    void get(){
        cout<<"Enter student details"<<endl;
        cout<<"enter the student name:"<<endl;
        cin>>name;
        cout<<"enter the student USN:"<<endl;
        cin>>usn;
        cout<<"Enter the student Marks:"<<endl;
        cin>>marks;

    }
    void put(){
        cout<<"Student name :"<<name<<endl;
        cout<<"Student USN :"<<usn<<endl;
        cout<<"Student Marks:"<<marks<<endl;
    }
};
int main(){
    Student s1,s2,s3;
    s1.get();
    s2.get();
    s3.get();
    s1.put();
    s2.put();
    s3.put();
    return 0;
}
