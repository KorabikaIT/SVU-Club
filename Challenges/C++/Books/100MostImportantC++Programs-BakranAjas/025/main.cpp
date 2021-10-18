//Program to che find whether an numver is divisible by 11 or not with out actual division.
// 2728: 2-7+2-8 = -11 is divisble by 11
// if the sum is 0 or 11 can be divided by 11

#include <iostream>
#include <math.h>

#define numLength(a) (std::to_string(a).length()) // how many digit in integer

using namespace std;

int main(){
    int i, number, numDigits, sign = 1, sum = 0;
    cout << "Enter nmber to Check: ";
    cin >> number;
    //Creating metrix to hold the digits in the memory ...
    numDigits = numLength(number);
    int Digits[numDigits];
    //spliting the number to digits ...
    for (i = 0; i < numDigits; i++){
        Digits[i] = number % 10;
        number /= 10;
    }
    //calculating the sum of the digits ...
    for (i = numDigits - 1; i >= 0; i--){
        sum += Digits[i] * sign;
        sign *= -1;
    }
    if (sum == 0 || abs(sum) == 11 ){
        cout << "the sum is: " << sum << ", Can be divided by 11"<< endl;
    }
    else {
        cout << "the sum is: " << sum << ", Can't be divided by 11" << endl;
    }
    return 0;
}