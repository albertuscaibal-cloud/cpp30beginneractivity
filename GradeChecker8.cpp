#include <iostream>

using namespace std;

int main(){
    int grade;
    
    cout<<"Input your grade: ";
    cin>>grade;

    cout<<"Grade: "<<grade<<"\n";
    if (grade >=101||grade <=50){
        cout<<"Invalid Input"<<"\n";
    }else if(grade>=75){
        cout<<"You have passed"<<"\n";
    }else {
        cout<<"You have failed!"<<"\n";
    }

    if(grade >=90 && grade <=100){
        cout<<"Rating: Very Good"<<"\n";
    } else if (grade>=75 && grade <=89){
     cout<<"Rating:  Good"<<"\n";
     } else if (grade >=51&&grade<=74){
        cout<<"Rating: Bad"<<"\n";
     }else{
        cout<<"Invalid"<<"\n";
     }

    

    

    
    return 0;
}