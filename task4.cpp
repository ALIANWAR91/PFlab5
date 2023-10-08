#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
float Height(float distance,float angle);
int main()
{
    float distance, angle,heght;
    cout<<"Enter the distance from the base of the tree (in feet): ";
    cin >>distance;
    cout<<"Enter the angle of elevation (in degrees): ";
    cin>>angle;
    heght= Height(distance, angle);
    cout<<"The height of the tree is: "<<heght<<" feet";
}
float Height(float distance,float angle)
{
    float height;
    angle=angle/57.2958;
    height= tan(angle)*distance;
    return height;
}