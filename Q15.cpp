#//Name: Muhammad Abrar   23i2087   PF Assignment 3 (Question 15)

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int sum,number1, number2, number3, number4, number5, number6, number7, number8;
    int difference, product, screen1, screen2, screen3, screen4;
    float division;
 
    cout << "Enter number 1: ";
    cin >> number1;
    cout << "Enter number 2: ";
    cin >> number2;
 
    sum = number1 + number2;
 
    cout << "\nSum:\n" << setw(4) << number1 << endl;
    cout << setw(2) << "+ " << number2 << endl;
    cout << setw(3) << "_____" << endl;
    cout << "Check result: ";
    cin >> screen1;
    if (screen1 == 1)
    {
        cout << "  " << number1 << endl;
        cout << "+ " << number2 << endl;
        cout << "_____" << endl;
        cout << "  " << sum << endl;
    }
 
    cout << "Proceed to Subtraction? ";
    cin >> screen2;
    if (screen2 == 1)
    {
        cout << "Enter two numbers: ";
        cin >> number3 >> number4;
 
        difference = number3 - number4;
 
        cout << "\nDifference:\n" << setw(4) << number3 << endl;
        cout << setw(2) << "- " << number4 << endl;
        cout << setw(3) << "_____" << endl;
        cout << "Check result: ";
        cin >> screen2;
        if (screen2 == 1)
        {
            cout << "  " << number3 << endl;
            cout << "- " << number4 << endl;
            cout << "_____" << endl;
            cout << "  " << difference << endl;
        }
    }
 
    cout << "Proceed to Multiplication? ";
    cin >> screen3;
    if (screen3 == 1)
    {
        cout << "Enter two numbers: ";
        cin >> number5 >> number6;
 
        product = number5 * number6;
 
        cout << "\nMultiplication:\n" << setw(4) << number5 << endl;
        cout << setw(2) << "* " << number6 << endl;
        cout << setw(3) << "_____" << endl;
        cout << "Check result: ";
        cin >> screen3;
        if (screen3 == 1)
        {
            cout << "  " << number5 << endl;
            cout << "* " << number6 << endl;
            cout << "_____" << endl;
            cout << "  " << product << endl;
        }
    }
 
    cout << "Proceed to Division? ";
    cin >> screen4;
    if (screen4 == 1)
    {
        cout << "Enter two numbers: ";
        cin >> number7 >> number8;
 
        division = (float)number7 / number8;
        if (number8 == 0)
        {
            cout << "\nInfinite";
        }
        else
        {
            cout << "\nDivision:\n" << setw(4) << number7 << endl;
            cout << setw(2) << "/ " << number8 << endl;
            cout << setw(3) << "_____" << endl;
            cout << "Check result: ";
            cin >> screen4;
            if (screen4 == 1)
            {
                cout << "  " << number7 << endl;
                cout << "/ " << number8 << endl;
                cout << "_____" << endl;
                cout << "  " << division << endl;
            }
        }
    }
 
    return 0;
}
