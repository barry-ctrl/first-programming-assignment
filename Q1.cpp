//Name: Muhammad Abrar     Assignment 3 (Question 1)   23i2087 CY(A) 

//Program for calculating remainder without using modulus operator

#include <iostream>
using namespace std;

int main(){
int num1,num2,rem = 0;
	cout<<"\n*******  REMAINDER CALCULATOR  ******* \n " <<endl;
	cout<<" Enter first number: ";
	cin>>num1;
	cout<<"Enter second number: ";
	cin>>num2;
	
while(num1 >= num2){
	num1 = num1 - num2;
	}
	
	rem = num1;
	cout<<"\nThe remainder is: " <<rem <<endl;
	
return 0;
}

