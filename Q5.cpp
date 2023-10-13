//Name: Muhammad Abrar   23i2087   PF Assignment 3 (Question 5)

#include <iostream>
using namespace std;

int main(){
    char letter1,letter2,letter3;
    int n;

    cout<<"\n*****\\PROGRAM FOR PRINTING PREVIOUS AND NEXT CHARACTER/*****\n ";
    cout<<"Enter any alphabet character: ";
    cin>>letter1;

    cout<<"\n Enter your number: ";
    cin>>n;

    letter2 = letter1 + n;
    letter3 = letter1 - n;

    cout<<n<<" characters after "<<letter1 <<" is "<<letter2<<endl;
    cout<<n<<" characters before "<<letter1<<" is "<<letter3;

    return 0;

}