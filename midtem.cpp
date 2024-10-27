#include<iostream>
using namespace std;
int main()
{
    float totalKilometer, costPerLiter, avgKmPerLiter, parkingFees, tolls;

    cout<<"Enter total kilometer: ";
    cin>> totalKilometer;
    cout<<"Cost per liter of petrol:";
    cin>> costPerLiter;
    cout<<"Average kilometer per liter: ";
    cin>> avgKmPerLiter;
    cout<<"Parking fees per day: ";
    cin>> parkingFees;
    cout<<"Tolls per day: ";
    cin>> tolls;

    double fuelConsumption = totalKilometer/avgKmPerLiter;
    double costPerDay = (fuelConsumption*costPerLiter)+parkingFees+tolls;

    cout<<"Cost per day ="<<costPerDay;

}
