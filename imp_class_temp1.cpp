#include<iostream>
using namespace std;
template<typename T>
T maximum(T a,T b){
    return (a>b) ? a:b;
}
int main(){
    int soma=maximum(2,3);
    cout<<"maximum of two numbers:"<<soma<<endl;
    double raama=maximum(23.45,67.89);
    cout<<"maximum of two numbers:"<<raama<<endl;
    char shama=maximum('k','k');
    cout<<"maximum of two numbers:"<<shama<<endl;
    return 0;

} 