#include<iostream>
using namespace std;
int glo = 6;//global variable
void sum(){
    int a;
    cout<<glo<<endl;//calling global variable
}
int main(){
    int a = 7, b = 5;
    float pi = 3.24;
    char q = 'h';
    cout<<"value of pi is : "<<pi<<"\n";
    cout<<"value of q is : "<<q<<"\n";
    cout<<"value of a is : "<<a<<" "<<"value of b is : "<<b;
    sum();
    bool re = true;
    cout<<glo<<" "<<re<<endl;
    int glo = 9;
    cout<<glo<<endl;//local variable takes precedence
    glo = 4;
    cout<<glo<<endl;//glo gets updated
    sum();
}