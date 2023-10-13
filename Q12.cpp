//Name: Muhammad Abrar   23i2087   PF Assignment 3 (Question 12)

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double diam,area,radius,slices;
    const double pi = (22/7);
        cout<<"\n*******\\PIZZA SLICE CALCULATOR/********\n";
        cout<<"Enter diameter of pizza in inches: ";
            cin>>diam;

    radius = (diam/2);
    area = pi * pow(radius,2);
    slices = area / 14.125;

    cout<<"The number of slices for pizza of "<<diam<<" inches are "<<setprecision(1)<<fixed<<slices<<" slices";
     return 0;
}


