/*Create a class Vehicle with common details and derive Bike and Truck with their specific attributes.
Display the shared and individual details using appropriate functions for each object.*/

#include<iostream>
#include<conio.h>
using namespace std;
class Vehicle
{
    private:
    int noplate;
    string company;
    public:
    void setvehicle()
    {
        cout<<"Enetr your company name:";
        cin>>company;
        cout<<"Enetr your number palte:";
        cin>>noplate;
    }
    void displayvehicle()
    {
        cout<<" your company name:"<<company<<endl;
        cout<<" your number palte:"<<noplate<<endl;
    }
};
class Bike :public Vehicle
{
    private:
    int mileage;
    string engineCC;
    public:
    void setbike()
    {
        cout<<"Enetr your bike engineCC :";
        cin>>engineCC;
        cout<<"Enetr your bike mileage:";
        cin>>mileage;
    }
    void displaybike()
    {
        displayvehicle();
        cout<<" your bike engineCC:"<<engineCC<<endl;
        cout<<" your bike mileage:"<<mileage<<endl;
    }
    
};
class Truck :public Vehicle
{
    private:
    int loadCapacity, wheels;
    public:
        void settruck()
    {
        cout<<"Enetr your truck load capacity :";
        cin>>loadCapacity;
        cout<<"Enetr your truck wheels:";
        cin>>wheels;
    }
    void displaytruck()
    {
        displayvehicle();
        cout<<" your truck load capacity:"<<loadCapacity<<endl;
        cout<<" your truck wheels:"<<wheels<<endl;
    }
};
int main()
{
    Bike obj1;
    Truck obj2;
    obj1.setvehicle();
    obj1.setbike();
    obj1.displaybike();
    obj2.setvehicle();
    obj2.settruck();
    obj2.displaytruck();
}
