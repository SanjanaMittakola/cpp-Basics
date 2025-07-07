//Create a class Movie with a copy constructor that copies the name and rating from another object.
#include<iostream>
#include<conio.h>
using namespace std;
class movies
{
    public:
    string name;
    int rate;
    public:
    movies(int r,string n)
    {
        rate=r;
        name=n;
    }
    movies(const movies &y)
    {
        name=y.name;
        rate=y.rate;
        cout<<"Enter your name : "<<name<<endl;
        cout<<"Enter your rating: "<<rate<<endl;
    }
};
int main()
{
    int rate;
    string name;
    cout<<" your name : ";
    cin>>name;
    cout<<" your rating: ";
    cin>>rate;
    movies y(rate, name);   // original object
    movies m2 =y;  //copy constructor   
}