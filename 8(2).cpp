/*Write a program to handle exception for “array index out of bound
“using user defined class. Write required operator overloading
function for the same.*/
#include<iostream>
using namespace std;
class Array{
    int *arr;//allocate memory dynamically to array
    int size;
    public:
    class Error{};
    Array(int n)
    {
        size = n;
        arr = new int[size];
    }
    void read()
    {
        for(int i = 0;i<size;i++)
        cin>>arr[i];
    }
    void display()
    {
        for(int i = 0;i<size;i++)
        cout<<arr[i];
    }
    int& operator [](int index)
    {
        if(index<0 || index>=size)
        throw Error();
        else
        return arr[index];

    }
};
int main()
{
    int n;
    cout<<"Enter the number of elements in an array ";
    cin>>n;
    Array A(n);
    cout<<"enter the array elements: ";
    A.read();
    cout<<"the array elements are : ";
    A.display();
    try{
        A[2]=20;
        cout<<"\narray is ";
            A.display();
            A[-1]=40;
            cout<<"\narray is ";
            A.display();
    }
    catch(Array::Error)
    {
        cout<<"\narray out of bound exception ";
    }
}

