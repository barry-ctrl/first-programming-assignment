//Name: Muhammad Abrar   23i2087   PF Assignment 3 (Question 8)

#include <iostream>
using namespace std;

int main(){

    int bit1,bit2,bit3,bit4,bit5,numb,sum;
    cout<<"Enter your 5 digit number: ";
    cin>>numb;

    bit1 = numb % 10;
    numb = numb / 10;
    bit2 = numb % 10;
    numb = numb / 10;
    bit3 = numb % 10;
    numb = numb / 10;
    bit4 = numb % 10;
    numb = numb / 10;
    bit5 = numb % 10;

    cout<<"Reversed number is "<<bit1<<bit2<<bit3<<bit4<<bit5<<endl;
    sum = bit1 + bit2 + bit3 + bit4 + bit5;
    cout<<"Sum of individual digits is "<<sum;

    return 0;

}

