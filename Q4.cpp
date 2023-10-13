//Name: Muhammad Abrar   23i2087   PF Assignment 3 (Question 4)

#include <iostream>
using namespace std;

int main(){
    int money,n=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0;
    cout<<"\n\n********** TAKA CURRENCY AMOUNT ORGANIZER PROGRAM **********"<<endl;
    cout<<"Enter your amount of money: ";
    cin>>money;
    cout<<"\nCurrency Number: "<<money<<"\n\n";

    if(money>0)
    {
        
        while(money>=650){
            n++;
            money = money - 650;
        }
            cout<<"650      :"<<n<<endl;

        while(money>=330){
            n2++;
            money=money - 330;
        }
            cout<<"330      :"<<n2<<endl;

        while(money>=110){
        n3++;
        money=money - 110;
        }
            cout<<"110      :"<<n3<<endl;
        while(money>=60){
            n4++;
            money=money - 60;
        }
        cout<<"60       :"<<n4<<endl;
        while(money>=10){
            n5++;
            money=money - 10;
        }
        cout<<"10       :"<<n5<<endl;
        while(money>=5){
            n6++;
            money=money - 5;
        }
            cout<<"5        :"<<n6<<endl;
        while(money>=1){
            n7++;
            money=money - 1;
        }
        cout<<"1        :"<<n7<<endl;
    }
    return 0;

}
    