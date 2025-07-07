/* Task 3: Student Grade Calculator
Create a class Student with:
Data members: name, roll, marks (in 3 subjects)
Member functions:
input() to read data
calculateAverage()
display() to print all details 
Create a student object and show result with average marks*/
#include<iostream>
#include<conio.h>
using namespace std;
class student{
    public:
    string name;
    int no,mark1,mark2,mark3;
    int avg;
    void input();
    int calculateAverage();
    void display();
};
void student::input()
{
    cout<<"Enetr your name : ";
    cin>>name;
    cout<<"Enetr your roll number :";
    cin>>no;
    cout<<"Enter your first subject marks : ";
    cin>>mark1;
    cout<<"Enter your second subject marks :";
    cin>>mark2;
    cout<<"Enter your third subject marks : ";
    cin>>mark3;
}
int student::calculateAverage()
{
    avg=(mark1+mark2+mark3)/3;
    return avg;
}
void student::display()
{
    cout<<"\nyour name is : "<<name;
    cout<<"\nyour roll number is :"<<no;
    cout<<"\nyour first subject marks is : "<<mark1;
    cout<<"\nyour second subject marks is : "<<mark2;
    cout<<"\nyour third subject marks is : "<<mark3;
    cout<<"\nyour avarage marks is : "<<avg;
}
int main()
{
    student obj;
    obj.input();
    obj.calculateAverage();
    obj.display();
}