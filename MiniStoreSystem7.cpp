#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string costumer,product;
    double price,amountPayment;
    int quantity,age;
    cout<<"Capacity of full box is 10"<<"\n";


    cout<<"Enter your name: ";
    cin>>costumer;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter your product: ";
    cin>>product;

    cout<<"Enter the price: ";
    cin>>price;
    cout<<"Enter the quantity: ";
    cin>>quantity;

    cout<<"Enter your amount of payment: ";
    cin>>amountPayment;
    
    double subTotal= price*quantity;
    double discount;
    if (age<=18){
         discount = 15.00;
    } else if(age>=60){
         discount = 20.00;
    }else{
        discount =00.00;
    }
    
   double finalTotal=subTotal-discount;
    cout<<"Name: "<<costumer<<"\n";
    cout<<"Product"<<product<<"\n";
    cout<<"Price: "<<price<<"\n";
    cout<<"Quantity: "<<quantity<<"\n\n";

    cout<<fixed<<setprecision(2)<<"SubTotal: "<<subTotal<<"\n";
    cout<<fixed<<setprecision(2)<<"Discount: "<<discount<<"\n";
    cout<<fixed<<setprecision(2)<<"Total cost: "<<finalTotal<<"\n";

    double change ;

    if (amountPayment>=finalTotal){
        cout<<"You have insuffecient money";
    } else{
        change = finalTotal-amountPayment;

    cout<<fixed<<setprecision(2)<<"Payment: "<<amountPayment<<"\n";
       cout<<fixed<<setprecision(2)<<"Change: "<<change<<"\n";

    
    int fullboxes = quantity/10;
    int leftoveritems = quantity%10;

    cout<<"Full boxes: "<<fullboxes<<"\n";
    cout<<"Left over items: "<<leftoveritems<<"\n";
    
    }











    return 0;
}