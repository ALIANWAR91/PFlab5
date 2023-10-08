#include <iostream>
#include <windows.h>
#include <cmath>
char checkAlphabetCase(char alphabet);
using namespace std;
int main()
{
    char alphabet;
    cout << "Enter a character (A/a): ";
    cin >>alphabet;
    checkAlphabetCase(alphabet);
}
char checkAlphabetCase(char alphabet)
{
    if(alphabet=='A')
    {
        cout<<"You have entered Capital A";
    }
    if(alphabet=='a')
    {
        cout<<"You have entered small a";
    }

}