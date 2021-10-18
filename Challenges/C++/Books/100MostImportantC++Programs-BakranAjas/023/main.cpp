//Program to Calculate and print the sum of even and odd integers of the first n natural numbers.
#include <iostream>

using namespace std;

int main(){
    int i, n, sumOdd = 0, sumEven = 0;
    cout << "Enter N: ";
    cin >> n;
    for (i = 0; i <= n; i++){//{((i % 2) == (0) ? (sumEven += i) : (sumOdd += i) )}
        if (i % 2 == 0){sumEven = sumEven + i;} else {sumOdd = sumOdd + i;}
    }
    cout << "the sum of even numbers: " << sumEven << endl;
    cout << "the sum of odd  numbers: " << sumOdd << endl;
    return 0;
}