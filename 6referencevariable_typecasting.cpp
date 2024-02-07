#include<iostream>
using namespace std;
int c = 45;
int main(){
    int a,b ,c;
    cout<<"enter value of a"<<endl;
    cin>>a;
    cout<<"enter value of b"<<endl;
    cin>>b;
    c = a+b;
    cout<<"value of c is "<<c<<endl;
    cout<<"hi sneha"<<endl;
    cout<<"global c is : "<<::c<<endl;
    float d = 34.3;
    long double e = 56.8;
    // 34.4 c++ say double'......34.4l is long double
    // 34.4f ab float
    cout<<"double"<<" "<<sizeof(34.4)<<endl;
      cout<<sizeof(34.4f)<<endl;
        cout<<sizeof(34.4F)<<endl;
          cout<<sizeof(34.4l)<<endl;
            cout<<sizeof(34.4L)<<endl;
              cout<<sizeof(34.46576)<<endl;
    cout<<d<<" "<<e<<endl;

    cout<<"REFERENCE VARIABLES : ";

    // shubh-->shubh--->dugu
    // rohan-->mohan-->koli
    float x = 455;
    float &y = x;//y x hogye y reference variable jo x ko pijnt krtA HAI
    cout<<x<<" "<<endl;
    cout<<y<<endl;
    cout<<"typecasting"<<endl;
    int a7 = 45;
    cout<<a7<<endl;
    cout<<(float)a7<<endl;

    float b7 = 9.876;
    cout<<int(b7)<<endl;

     int c7 = int(b7);
     cout<<c7<<endl;

     cout<<a7+b7<<endl;
     cout<<a7 + int(b7)<<endl;
     cout<<a7 + (int)b7<<endl;

    return 0;
}