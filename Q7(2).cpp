//Name: Muhammad Abrar   23i2087   PF Assignment 3 (Question 7(Method 2))

#include <iostream>
using namespace std;

int main(){

    int val1,val2;
    cout<<"\n*****\\VALUE SWAPPER PROGRAM/*****\n";
        cout<<"Enter Value 1: ";
            cin>>val1;
        cout<<"Enter Value 2: ";
            cin>>val2;

            val1 = val1 + val2;
            val2 = val1 - val2;
            val1 = val1 - val2;

         cout<<"\nSwapped Value 1: "<<val1;
    cout<<"\nSwapped Value 2: "<<val2;

    return 0;
}
   