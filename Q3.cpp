//Name: Muhammad Abrar   23i2087   PF Assignment 3 (Question 3)

#include <iostream>
using namespace std;

int main(){
    int num1,num2,res1,finres,res2,res3,comp;
    cout<<"********** PROGRAM FOR SUBTRACTING 2 NUMBERS USING 9s COMPLEMENT METHOD **********\n"<<endl;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;

if((num1>=100000 and num2>=100000) && (num1<=999999 and num2<=999999))
{
    if (num2<num1)
    {
        comp = 999999 - num2; //using 9s complement method
        res1 = num1 + comp; 
        res2 = res1/1000000; // this will give quotient
        res3 = res2 * 1000000;
        finres = -(res3 - (res1 + res2));
        cout<<"\nResult of Subtraction of both numbers is "<<finres;

    }
    else
    {
        comp = 999999 - num1; //using 9s complement method
        res1 = num2 + comp; 
        res2 = res1/1000000; // this will give quotient
        res3 = res2 * 1000000; 
        finres = -(res3 - (res1 + res2));
        cout<<"\nResult of Subtraction of both numbers is "<<finres<<"\n\n";

    }
}    
else{
    cout<<"\n\nInvalid Input\n\n";
}

    return 0;
}
    