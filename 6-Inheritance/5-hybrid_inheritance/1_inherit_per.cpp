/*Create a Result class using hybrid inheritance that combines academic and sports performance.
Implement methods to set and display complete student results including personal, academic, and sports details.*/

#include<iostream>
#include<conio.h>
using namespace std;
class person
{
    private:
    string name;
    int age;
    public:
    void setpersondetail()
    {
        cout<<"Enter person name :";
        cin>>name;
        cout<<"Enetr person age : ";
        cin>>age;

    }
    void displaypersondetail()
    {
        cout<<"\n";
        cout<<" person name :"<<name<<endl;
        cout<<" person age : "<<age<<endl;
    }
};
class student :virtual public person
{
    private: 
    string class_name;
    int roll_no;
    public:
    void setStudentDetails()
    {
        cout<<"Enter your class name : ";
        cin>>class_name;
        cout<<"Enetr your student enrollment no : ";
        cin>>roll_no;
    }
    void displayStudentDetails()
    {
        cout<<" your class name : "<<class_name<<endl;
        cout<<" your student enrollment no : "<<roll_no<<endl;
    }
};
class Academics : public student
{
    protected:
    int mathMarks, scienceMarks;
    public:
    void setAcademicMarks()
    {
        cout<<"Enter your math marks : ";
        cin>>mathMarks;
        cout<<"Enetr your science marks : ";
        cin>>scienceMarks;
    }
    void displayAcademicMarks()
    {
        cout<<" your math marks : "<<mathMarks<<endl;
        cout<<" your science marks : "<<scienceMarks<<endl;
    }
};
class Sports : virtual public person
{
    protected:
    string sportName;
    int score;
    public:
    void setSportsDetails()
    {
        cout<<"Enter your sport  name : ";
        cin>>sportName;
        cout<<"Enetr your score : ";
        cin>>score;

    }
    void displaySportsDetails()
    {
        cout<<" your sport name: "<<sportName<<endl;
        cout<<" your score : "<<score<<endl;
    }
};
class Result : public Academics , public Sports
{
    private:
    int total;
    public:
    void calculateTotalScore()
    {
        total = mathMarks + scienceMarks + score;
    }
    void displayFullResult()
    {
        displaypersondetail();
        displayStudentDetails();
        displayAcademicMarks();
        displaySportsDetails();
        cout<<" your total score : "<<total<<endl;
    }
};
int main()
{
    Result obj;
    obj.setpersondetail();
    obj.setStudentDetails();
    obj.setAcademicMarks();
    obj.setSportsDetails();
    obj.calculateTotalScore();
    obj.displayFullResult();
}