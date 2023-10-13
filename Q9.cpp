//Name: Muhammad Abrar   23i2087   PF Assignment 3 (Question 9)

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

    double radian;
    double cos1,sin1,tan1;
    cout<<"*******\\Trignometry Calculator/******* \n";
    cout<<"Enter angle in radians: ";
    cin>>radian;
cos1 = cos(radian);
sin1 = sin(radian);
tan1 = tan(radian);
cout<<setprecision(4)<<fixed<<"\nCosine of Angle is "<<cos1;
cout<<setprecision(4)<<fixed<<"\nSine of Angle is "<<sin1;
cout<<setprecision(4)<<fixed<<"\nTan of Angle is "<<tan1;

return 0;

}

