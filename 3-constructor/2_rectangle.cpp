/*2. Create a class Rectangle with a constructor that accepts length and width. Add a function to calculate and return the area.*/
#include<iostream>
#include<conio.h>
using namespace std;
class Rectangle{
    public:
    int length,width,rec;
    public:
    Rectangle()
    {
        cout<<"Enter your length: ";
        cin>>length;
        cout<<"Enter your width: ";
        cin>>width;
        rec=length*width;
        cout<<"Your rectangle value is :"<<rec;
    }
};
int main()
{
    Rectangle obj;
}
