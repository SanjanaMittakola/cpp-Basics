//Create a class Person with a constructor that initializes name and age. 
//Display the data using a member function.
#include<iostream>
#include<conio.h>
using namespace std;
class person{
    public:
    string name;
    int age;
    public:
    person()
    {
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your age: ";
        cin>>age;
    }
};
int main()
{
    person o ;
}