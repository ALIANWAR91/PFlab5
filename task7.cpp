#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
int IsSymmetrical(int number);
int main()
{
	int number;
	cout<<"Enter a three-digit number: ";
	cin>>number;
  IsSymmetrical(number);
}
int IsSymmetrical(int number)
{
  int mode1,mode3,division1;
	mode1=number%10;
	division1=number/10;
    mode3=number/100;
    if (mode1==mode3)
    {
      cout <<"The number is symmetrical.";
    }
    else
    {
    cout <<"The number is not symmetrical.";
    }
}
