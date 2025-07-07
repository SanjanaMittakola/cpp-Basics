/*Create a class Box with overloaded constructors:
One constructor with no arguments (sets all dimensions to 1) One constructor with 3 parameters (length, breadth, height)
Add a method to calculate volume.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Box
{
    public:
    int length,breadth,height,volume;
    public:
    Box()
    {
        length=1;
        breadth=1;
        height=1;
    }
    Box(int l,int b,int h)
    {
        length=l;
        breadth=b;
        height=h;
        volume=length*breadth*height;
        cout<<"your volumn is: "<<volume;
    }
};
int main()
{
    int length,breadth,height;
    cout<<"Enter your length: ";
    cin>>length;
    cout<<"Enter your breadth: ";
    cin>>breadth;
    cout<<"Enter your height: ";
    cin>>height;
    Box o1;
    Box o2(length,breadth,height);
}