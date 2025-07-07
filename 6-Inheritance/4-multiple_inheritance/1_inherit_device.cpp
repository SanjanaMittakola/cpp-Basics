/*Create a SmartDevice class that inherits from both Device and InternetEnabled.
Implement methods to set and display device and network details using displaySmartDeviceDetails().*/

#include<iostream>
#include<conio.h>
using namespace std;
class device
{
    private:
    int batteryLife;
    string deviceName;
    public:
    void setDeviceDetails()
    {
        cout<<"Enter your device name:";
        cin>>deviceName;
        cout<<"Enetr your battery life :";
        cin>>batteryLife;
    }
    void displayDeviceDetails()
    {
        cout<<" your device name:"<<deviceName<<endl;
        cout<<" your battery life :"<<batteryLife<<endl;
    }
};
class InternetEnabled 
{
    private:
    string ipAddress, wifiConnected;
    public:
    void connectToWiFi()
    {
        cout<<"Enter your device ip address:";
        cin>>ipAddress;
        cout<<"Enetr your wifi connected :";
        cin>>wifiConnected;
    }
    void displayNetworkStatus()
    {
        cout<<" your device ip address:"<<ipAddress<<endl;
        cout<<" your wifi connected :"<<wifiConnected<<endl;
    }
};
class SmartDevice : public device, public InternetEnabled
{
    public:
    void displaySmartDeviceDetails()
    {
        displayDeviceDetails();
        displayNetworkStatus();
    }
};
int main()
{
    SmartDevice obj;
    obj.setDeviceDetails();
    obj.connectToWiFi();
    obj.displaySmartDeviceDetails();
    getch();
}