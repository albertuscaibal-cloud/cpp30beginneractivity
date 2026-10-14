#include <iostream>
using namespace std;

int main(){
    int electricityPowerUsage;
    int costPerHour = 50;

    cout<<"Enter your total elecricity power usage ";
    cin>>electricityPowerUsage;

    int kwh = (electricityPowerUsage * costPerHour)/1000;
    int total = kwh * 50;

    cout<<"Kwh: "<< kwh<<"\n";
    cout<<"Total "<< total;

    return 0;
}