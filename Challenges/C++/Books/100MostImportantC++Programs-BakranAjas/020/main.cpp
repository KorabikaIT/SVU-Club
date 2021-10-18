//Program to accept any single digit number and print it in words
#include <iostream>

using namespace std;

int main(){
    int n;
    string Numbers[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    cout << "Enter a number: " << endl;
    cin >> n;
    cout << Numbers[n];

    return 0;
}