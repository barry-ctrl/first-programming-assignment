//Name: Muhammad Abrar   23i2087   PF Assignment 3 (Question 14)

#include <iostream>
using namespace std;

int main(){
    int hours,regwage,overwage,overhours,totwage;
    cout<<"\n*******\\WAGE CALCULATOR/*******\n";
    cout<<"Enter number of hours worked: ";
    cin>>hours;

    regwage = hours * 1000;
    overhours = hours - 40;
    overhours = (hours - 40)*(overhours>0);
    overwage = overhours * 1500;
    totwage = regwage + overwage;

    cout<<"The weekly wage is "<<totwage<<" Rs";


    


return 0;


}