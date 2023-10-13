//Name: Muhammad Abrar   23i2087   PF Assignment 3 (Question 11)

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

    double payment,rate,npay,loan,var1;
    cout<<"\n******\\FINANCIAL CALCULATOR/******\n";
    cout<<"Enter Number of Payments: ";
    cin>>npay;
    cout<<"Enter Monthly Interest Rate: ";
    cin>>rate;
    cout<<"Enter Amount of Loan: ";
    cin>>loan;
    cout<<"\n";

    cout<<setw(27)<<left<<"Monthly Interest Rate: "<<rate<<"%"<<endl;
    rate = (rate/100);
    var1 = pow((1+rate),npay);
    payment = ((rate * var1)/(var1 - 1)) * loan;

    cout<<setw(27)<<left<<"Loan Amount: "<<loan<<" $"<<endl;
    cout<<setw(27)<<left<<"Number of Payments:"<<npay<<" $"<<endl;
    cout<<setw(27)<<left<<"Monthly Payment: "<<payment<<" $"<<endl;
    cout<<setw(27)<<left<<"Amount Paid back"<<((payment * rate) * npay) + loan<<" $"<<endl;
    cout<<setw(27)<<left<<"Interest Paid"<<((payment * rate) * npay)<<" $"<<endl;

    return 0;
}
