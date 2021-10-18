//Program to reverse a number
// reverse a number mathematically.
/*
Step1: Isolate the las digit in number >>> lastDigit = number % 10
Step2: Append lastDigit to reverse >>> reverse = (reverse * 10) + lastDigit
Step3: Remove last digit from number >>> number = number / 10
*/
#include <iostream>

using namespace std;

int main(){
    long number, reverse = 0, lastDigit;
    cout << "Enter number: ";
    cin >> number;
    while (number != 0){
        lastDigit = number % 10;
        reverse = (reverse * 10) + lastDigit;
        number = number / 10;
    }
    cout << "The reversed number is: " << reverse;
    return 0;
}