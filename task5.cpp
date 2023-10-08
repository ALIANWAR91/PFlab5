#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
float Determinant(float a,float b,float c,float determinant,float root1, float root2);
int main()
{
    float a,b,c,determinant,root1,root2;
    cout<<"Enter the value of a: ";
    cin>> a;
    cout<<"Enter the value of b: ";
    cin>> b;
    cout<<"Enter the value of c: ";
    cin>> c;
    Determinant(a,b,c, determinant, root1, root2);
}
float Determinant(float a,float b,float c,float determinant,float root1, float root2)
{
    determinant=pow(b,2)-4*a*c;
    if (determinant>0)
    {
      
        root1=(-b+sqrt(determinant))/(2*a) ;
        root2=(-b-sqrt(determinant))/(2*a) ;
        cout<<"Solutions: x = "<<root1<<" and x = "<<root2;
    }
    if (determinant==0)
    {
        root1=root2=-b/2*a;
        cout<<"Solution: x = "<<root1;
    }
    if (determinant<0)
    {
        root1=(-b/2*a);
        root2=(sqrt(-determinant))/2*a;
        cout<<"Complex Solutions: x = "<<root1<<" + "<<root2<<"i and x = "<<root1<<" - "<<root2<<"i";
    }

}
