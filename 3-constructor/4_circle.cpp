/*4. Create a class Circle with a parameterized constructor that sets the radius.
 Write a method to return the area.*/
#include<iostream>
#include<conio.h>
using namespace std;
class Circle
{
    public:
    int radius;
    float pi,area;
    public:
    Circle(float pi,int radius)
    {
        area=pi*radius*radius;
        cout<<"circle value is: "<<area;
    }
};
int main()
{
    int a;
    cout<<"enter radius value: ";
    cin>>a;
    Circle obj(3.14,a);
}
