/*Create a class Car with a constructor to initialize brand and speed. Add a destructor that prints "Car object destroyed".*/
#include<iostream>
#include<conio.h>
using namespace std;
class Car
{
    public:
    int speed;
    string brand;
    public:
    Car(int s,string b)
    {
        speed=s;
        brand=b;
        cout<<"your car speed : "<<speed<<endl;
        cout<<"your car brand : "<<brand<<endl;
    }
    ~Car()
    {
        cout<<"Car object destroyed";
    }
};
int main()
{
    Car o1(70,"odi");
    Car o2();
}