#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
float calculatePoolState();
int main()
{
    float V,P1,P2,percent1,percent2,pool,absent,H;
    cout<< "Enter volume of the pool in liters: ";
    cin>>V;
    cout<< "Enter flow rate of the first pipe per hour: ";
    cin>>P1;
    cout<< "Enter flow rate of the second pipe per hour: ";
    cin>>P2;
    cout<<"Enter hours that the worker is absent: ";
    cin>>H;
    calculatePoolState();
}
float calculatePoolState()
{
    float V,P1,P2,percent1,percent2,pool,absent,H;
    percent1=(((P1/2)+P1)/10)*H;
    percent2=(((P2/2)+P2)/10)*H;
    pool=(P1+P2)*H;
    if(pool<=V)
    {
        pool=pool*0.1;
        cout<<"The pool is "<<pool<<"% full. Pipe 1: "<<percent1<<"%. Pipe 2: "<<percent2<<"%.";
    }
    if(pool>V)
    {
        float overflow;
        overflow=pool-V;
        cout <<"For "<<H<<" hours, the pool overflows with "<<overflow<<" liters.";
    }
}