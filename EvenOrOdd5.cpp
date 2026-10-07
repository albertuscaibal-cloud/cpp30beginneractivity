#include <iostream>
using namespace std;

int main(){
    int num1;
    cout<<"Input first number: "<<"\n";
    cin>>num1;
   

    int  result = num1 %2;

    if (result==0){
        cout<<"Even";

    }else{
        cout<<"Odd";
    }



    return 0;
}