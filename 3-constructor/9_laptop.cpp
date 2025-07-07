/*Create a class Laptop with a constructor that has default arguments for RAM (8 GB) and storage (256 GB). 
Allow customizing them at the time of object creation.*/
#include<iostream>
#include<conio.h>
using namespace std;
class Laptop
{
    public:
    int ram=8,storage=256;
    public:
    Laptop()
    {
        cout<<"defalt constructor";
        cout<<"your laptop ram is :"<<ram<<endl;
        cout<<"your laptop storage is :"<<storage<<endl;
    }
    Laptop(int r)
    {
        ram=r;
        cout<<"one parameterize constructor";
        cout<<"your laptop ram is :"<<ram<<endl;
        cout<<"your laptop storage is :"<<storage<<endl;
    }
    Laptop(int r ,int s)
    {
        ram=r;
        storage=s;
        cout<<"two parameterize constructor";
        cout<<"your laptop ram is :"<<ram<<endl;
        cout<<"your laptop storage is :"<<storage<<endl;
    }
};
int main()
{
    Laptop o1;
    Laptop o2(16);
    Laptop o3(32,512);
}