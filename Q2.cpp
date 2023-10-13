//Name: Muhammad Abrar   23i2087   PF Assignment 3 (Question 2)

#include <iostream>
using namespace std;

int main(){
    int bit1,bit2,bit3,bit4,bit5,numb,div;
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

    bit1 = bit1 ^ 1;
    bit2 = bit2 ^ 1;
    bit3 = bit3 ^ 1;
    bit4 = bit4 ^ 1;
    bit5 = bit5 ^ 1;

    cout<<"Your Flipped binary number is "<<bit1<<bit2<<bit3<<bit4<<bit5;

    return 0;
}