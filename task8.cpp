#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
int num();
int main()
{
    int number,result;
    cout<<"Enter a five-digit number: ";
	cin>>number;
    result=num();
    if(result==1)
    {
        cout<<"Oddish";
    }
    else
    {
        cout<<"Evenish";
    }
}

int num()
{
    int number, mode1,mode2,mode3,mode4,mode5,division1,division2,division3,division4,sum;
	mode1=number%10;
	division1=number/10;
	mode2=division1%10;
	division2=division1/10;
	mode3=division2%10;
	division3=division2/10;
    mode4=division3%10;
    division4=number/10000;
    sum=mode1+mode2+mode3+mode4+division4;
    mode5=sum%2;
    return mode5;
}
 