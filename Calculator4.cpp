#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout<<"Enter your first number:\n";
    cin>>num1;
    cout<<"Enter your second number:\n";
    cin>>num2;

    int addition = num1+num2;
    int substraction = num1-num2;
    int multiplication = num1*num2;
    int division = num1/num2;

    cout<<"Addition: "<<addition<<"\n";
    cout<<"Substraction: "<<substraction<<"\n";
    cout<<"Multiplication: "<<multiplication<<"\n";
    cout<<"Division: "<<division<<"\n";

}