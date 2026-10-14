#include <iostream>
using namespace std;

int main(){

    int num1, num2, num3;
    cout<<"Enter num1: ";
    cin>>num1;
    cout<<"Enter num2: ";
    cin>>num2;
    cout<<"Enter num3: ";
    cin>>num3;

    if (num1 >= num2 && num1 >= num2){
        cout<<"Highest number: "<<num1;}
 
    else if(num2 >= num1&& num2 >=num3){
        cout<<"Highest number: "<<num2;}
    else {
        cout<<"Highest number: "<<num3;
    }




return 0;

}