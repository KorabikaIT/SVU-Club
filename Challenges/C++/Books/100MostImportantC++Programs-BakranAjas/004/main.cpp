//Write C++ program to swap two numbers using macros.
#include <iostream>
#define SWAP(a,b) {int mid;mid = a;a = b;b = mid;}

using namespace std;

int main()
{
    int a,b;
    cout << "Enter Two integers:" << endl;
    cin >> a >> b;
    cout << "Integer1 = " << a << "\tinteger2 = " << b << endl;
    SWAP(a,b)
    cout << "Integer1 = " << a << "\tinteger2 = " << b << endl;
    return 0;
}