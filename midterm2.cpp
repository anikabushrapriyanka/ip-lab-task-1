#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    double m, h;
    cout<<" mass(in kilogram)=";
    cin>>m;
    cout<<" height(meters)=";
    cin>>h;

    double BMI = m/h*h;

    cout<<"body mass index: "<<BMI;



}
