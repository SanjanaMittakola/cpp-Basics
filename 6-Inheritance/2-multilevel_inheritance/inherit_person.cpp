/*Create a class `Person` and extend it to `Employee`, then to `Manager`, adding more details at each level. 
Input and display all manager details, including personal, employee, and managerial information.
*/
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
class employee : public person
{
    private:
    int emp_id;
    string department;
    public:
    void setsemployedetail()
    {
        cout<<"Enter employee id :";
        cin>>emp_id;
        cout<<"Enetr employee department : ";
        cin>>department;

    }
    void displayemployedetail()
    {
        cout<<" employee id :"<<emp_id<<endl;
        cout<<" employee department : "<<department<<endl;
    }

};
class manager : public employee
{
    private:
    int teamsize;
    string project_name;
    public:
    void setmanagerdetail()
    {
        cout<<"Enter project name :";
        cin>>project_name;
        cout<<"Enetr team size : ";
        cin>>teamsize;
    }
    void displaymanagerdetail()
    {
        displaypersondetail();
        displayemployedetail();
        cout<<"  manager name :"<<project_name<<endl;
        cout<<" team size : "<<teamsize<<endl;
    }
};
int main()
{
    manager obj;
    obj.setpersondetail();
    obj.setsemployedetail();
    obj.setmanagerdetail();
    obj.displaymanagerdetail();
}