#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
int timeTravel();
int main()
{
    int min,hour,min2,hour2,totalMin,totalMin2;
    cout<<"Enter Hours: ";
    cin>>hour;
    cout<<"Enter Minutes: ";
    cin>>min;
    timeTravel();
}
int timeTravel()
{
    int min,hour,min2,hour2,totalMin,totalMin2;
    hour=hour*60;
    totalMin=min+hour;
    totalMin2=totalMin+15;
    hour2=totalMin2/60;
    min2=totalMin2%60;
    cout<<hour2<<":"<<min2;
}