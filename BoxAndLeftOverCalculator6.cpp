#include <iostream>
using namespace std;

int main(){
    int items,capacity;
    cout<<"Enter total items: "<<"\n";
    cin>>items;
    cout<<"Enter total capacity: "<<"\n";
    cin>>capacity;

    int fullbox =items/capacity;
    int leftoveritems = items%capacity;

    cout<<"full boxes: "<<fullbox<<"\n";
    cout<<"leftover items: "<<leftoveritems<<"\n";
    




    return 0;
}