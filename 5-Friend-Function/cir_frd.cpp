/*Create a class Circle with a private data member radius.
Write a friend function that compares two Circle objects and returns the one with a larger area. */
#include<iostream>
#include<conio.h>
using namespace std;
class Circle{
    private:
    float radius;
    public:
    Circle()
    {
        cout<<"Enter your radius: ";
        cin>>radius;
    }
    friend int compares(Circle c1,Circle c2);
};
int compares(Circle c1,Circle c2)
{
    float area1=3.14*c1.radius*c1.radius;
    float area2=3.14*c2.radius*c2.radius;
    cout<<"your circle 1 value is :"<<area1<<endl;
    cout<<"your circle 2 value is :"<<area2<<endl;
    if(area1>area2)
    {
         return c1.radius;
    } else {
        return c2.radius;
    }
}
int main()
{

    Circle obj1;
    Circle obj2;
    cout<<"The circle with the larger area is:"<<compares(obj1, obj2);
}