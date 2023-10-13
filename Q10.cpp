//Name: Muhammad Abrar   23i2087   PF Assignment 3 (Question 10)

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double principal,interest,tcomp,amount,var1;
    cout<<"******\\FINANCIAL INTEREST CALCULATOR/******\n";
    cout<<"Enter Balance in Savings Account: ";
    cin>>principal;

    cout<<"Enter number of times interest is compounded: ";
    cin>>tcomp;
    cout<<"Enter Interest Rate: ";
    cin>>interest;
    cout<<"Interest Rate:         "<<interest<<"%"<<endl<<endl; 
    interest = interest / 100;

    var1 = (1 + (interest/tcomp));
    amount = principal * pow(var1,tcomp);

    cout<<"Times Compounded:           "<<tcomp<<endl;
    cout<<"Principal:            $   "<<principal<<endl;
    cout<<"Interest:             $   "<<interest * principal<<endl;
    cout<<"Amount in Savings:    $ "<<(interest * principal) + principal;

    return 0;
}


    


