/* Write a class of your own defining the data members: error number and error message. Write a constructor to initialize both the data members and function
 to display the values. Write a program which handles the exception for divide by zero. Write appropriate catch block to handle the exception thrown of the class type.*/
 #include<iostream>
 using namespace std;
class Exception
{
    private:
    int error_num;
    string error_msg;
    public:
    Exception(int ern,string erm)
    {
        error_num = ern;
        error_msg = erm;
    }
    void display()
    {
        cout<<error_num<<error_msg;

    }
};

    double division(int a,int b)
    {
        if (b==0)
        {
            throw Exception(007,"\nException for Division by zero ");

        }
        return(a/b);
    }
    int main()
    {
        int x = 50;
        int y = 0;
        double z = 0;
    
try{
    z=division(x,y);
    cout<<z<<endl;
}


catch(Exception e)
{
    e.display();

}
return 0;
}