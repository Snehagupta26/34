// if(!fin)
// {
//   cerr<<"file not opened";
//   exit(1);
// }
#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,const char * argv[])
{
    char name[20],name2[20];
    float sal,sal2;
    ofstream fout("C:\\Users\\Sneha Gupta\\Desktop.txt");
if(!fout)
{
  cerr<<"file not opened";
  exit(1);
}
    for(int i =0;i<2;i++)
    {

    cout<<"Enter the name and salary of the employee : ";
    cin>>name>>sal;
    fout<<name<<"\t"<<sal;
    fout<<"\n";
    }
    fout.close();
    ifstream fin("C:\\Users\\Sneha Gupta\\Desktop.txt");
if(!fin)
{
  cerr<<"file not opened";
  exit(1);
}
     for(int i =0;i<2;i++)
    // while(fin)
    //  while(fin.eof() !=0)
    //   while(!fin.eof())
    {

    
    fin>>name2;
    fin>>sal2;
    cout<<"the name and salary of the employee entered is : \n";
    cout<<name2<<"\t"<<sal2;
    }
    fin.close();
    return 0;
}