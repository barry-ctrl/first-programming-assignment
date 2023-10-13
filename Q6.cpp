//Muhammad Abrar  23i2087   Assignment 3 (Question 6)

#include <iostream>
using namespace std;

int main(){
    int days,n,n1,n2;
    cout<<"*******  PROGRAM FOR DISPLAYING YEAR,MONTHS AND DAYS  *******"<<endl;
    cout<<"Enter the number of days: ";
    cin>>days;

    if(days>0)
    {
        while(days>=365)  
        {
            n++;
            days-=365;
        }
        cout<<n<<" years "; //for calculating years
        while (days>=30)
        {
            n1++;
            days-=30;      //for calculating months
        }
        cout<<n1<<" months ";  
        while (days>=1)
        {
            n2++;    //for calculating days
            days-=1;
        }
        cout<<n2<<" days "; 
    }    
return 0;


}