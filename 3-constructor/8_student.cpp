/*Write a class Student that has two constructors:
One that initializes only name. Another that initializes name and roll number.*/
#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    public:
    Student(string n)
    {
        name=n;
        roll=-1;
        cout<<"Name: "<<name<<endl;
        if(roll!=-1)
        {
            cout<<"Roll number is: "<<roll<<endl;
        }
        else{
            cout<<"Roll number is: not assingned"<<endl;
        }
    }
    Student(string n,int r)
    {
        name=n;
        roll=r;
        cout<<"Name: "<<name<<endl;
        if(roll!=-1)
        {
            cout<<"Roll number is: "<<roll<<endl;
        }
        else{
            cout<<"Roll number is: not assingned"<<endl;
        }
    }
};
int main()
{
    string name;
    int roll;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your roll no: ";
    cin>>roll;
    Student o1(name);
    Student o2(name,roll);

}
