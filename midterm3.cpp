#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1, num2;

    cout<<"Enter first integer number: ";
    cin>>num1;
    cout<<"Enter second integer number: ";
    cin>>num2;

    float even,odd;

    even=num1%2;
    if(even==0)
    {
        cout<<num1<<" :Even "<<endl;
    } else {
        cout<<num1<<" :odd "<<endl;
    }

     even=num2%2;
    if(even==0)
    {
        cout<<num2<<" :Even "<<endl;
    } else {
        cout<<num2<<" :odd ";
    }

    if(num1>num2)
    {
        cout<<"Number 1 is maximum ";

    } else {
        cout<<"Number 2 is maximum ";
    }





}
