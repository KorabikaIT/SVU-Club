//program to find largest number of al list of numbers entered through keyboard
//it can be solved with array
//this solution will not save the numbers and print them
#include <iostream>

using namespace std;

int main(){
    int n,i;
    double Max = 0, inputNumber;
    cout << "Enter how many Numbers to compeer: ";
    cin >> n;
    for (i = 0; i < n; i++){
        cout << "\nEnter Num.NO("<< i << "): ";
        cin >> inputNumber;
        if (inputNumber > Max) {Max = inputNumber;}
    } 
    cout << "\nMax: " << Max;
    return 0;
}