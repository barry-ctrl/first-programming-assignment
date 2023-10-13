//Name: Muhammad Abrar   23i2087   PF Assignment 3 (Question 13)

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string name,city,college,prof,anim,pet;
    int age;

    cout<<"Enter your name: ";
        cin>>name;
    cout<<"Enter your age: ";
        cin>>age;
    cout<<"Enter your city: ";
        cin>>city;
    cout<<"Enter your college: ";
        cin>>college;
    cout<<"Enter your profession: ";
        cin >> prof;
    cout<<"Enter your pets type: ";
        cin >> anim;
    cout<<"Enter your pets name: ";
        cin >> pet;
 

    cout<<"\"There once was a person named "<<name<<" who lived in "<<city<<". At the age of "<<age<<",\n"<<name<<" went to college at "<<college<<". "<<name<<" graduated and went to work as \na "<<prof<<". Then, "<<name<<" adopted a(n) "<<anim<<" named "<<pet<<". They\nboth lived happily ever after.\"";

     return 0;

}