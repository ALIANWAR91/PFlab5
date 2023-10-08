#include<iostream>
using namespace std;

void convert( int number){
    int numberOnes,numberTens;
    numberOnes=number%10;
    numberTens=number/10;


    switch (numberTens)
    {
   
     case 2:
        cout<<"Twenty";
        break;
     case 3:
        cout<<"Thirty";
        break;
     case 4:
        cout<<"Forty";
        break;
     case 5:
        cout<<"Fifty";
        break;
     case 6:
        cout<<"Sixty";
        break;
     case 7:
        cout<<"Seventy";
        break;
     case 8:
        cout<<"Eighty";
        break;
     case 9:
        cout<<"Ninety";
        break;
    }

    


    switch (numberOnes)

    {
    case 1:
        cout<<"One";
        break;
     case 2:
        cout<<"Two";
        break;
     case 3:
        cout<<"Three";
        break;
     case 4:
        cout<<"Four";
        break;
     case 5:
        cout<<"Five";
        break;
     case 6:
        cout<<"Six";
        break;
     case 7:
        cout<<"Seven";
        break;
     case 8:
        cout<<"Eight";
        break;
     case 9:
        cout<<"Nine";
        break;
        }


}

main(){
    int number;
    cout<<"Enter a number (1-99): ";
    cin>>number;
    if(number>=10 && number<20){
    if (number==10){
        cout<<"Ten";
    }
    if (number==11){
        cout<<"Eleven";
    }
      if (number==12){
        cout<<"Twelve";
    }

    if (number==13){
        cout<<"Thirteen";
    }

    if (number==14){
        cout<<"Fourteen";
    }

    if (number==15){
        cout<<"Fifteen";
    }

    if (number==16){
        cout<<"Sixteen";
    }

   if (number==17){
        cout<<"Seventeen";
    }

   if (number==18){
        cout<<"Eighteen";
    }

   if (number==19){
        cout<<"Nineteen";
    }
    }
    else{
    convert(number);
    }
}
