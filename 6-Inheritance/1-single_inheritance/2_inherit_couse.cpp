/*Create a class Course with private members courseName and courseCode. 
Derive a class Enrollment to set student details and display which student is enrolled in which course.*/
#include<iostream>
#include<conio.h>
using namespace std;
class course
{
    private:
    string name;
    int code;
    public:
    void setcourse()
    {
        cout<<"Enter your course name : ";
        cin>>name;
        cout<<"Enter your course code : ";
        cin>>code;
    }
    void dispalycourse()
    {
        cout<<" course name : "<<name<<endl;
        cout<<" course code : "<<code<<endl;

    }

};
class Enrollment : public course
{
    private: 
    string std_name;
    int roll_no;
    public:
    void setEnrollment()
    {
        cout<<"Enter your student name : ";
        cin>>std_name;
        cout<<"Enter your student enrollment no : ";
        cin>>roll_no;
    }
    void displayEnrollment()
    {
        dispalycourse();
        cout<<" student name : "<<std_name<<endl;
        cout<<" student enrollment no : "<<roll_no<<endl;
    }

};
int main()
{
    Enrollment obj;
    obj.setcourse();
    obj.setEnrollment();
    obj.displayEnrollment();
}