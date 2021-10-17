//Program to read Three Numbers And Print The Bigest of Given Three Numbers
#include <iostream>
#define Biggest(a,b) ((a)>(b) ? a : b )

using namespace std;

int main()
{
    int x, y, z;
    cout << "Enter 3 integers: "<< endl;
    cin >> x >> y >> z;
    cout << "The Biggest: " << Biggest(x,Biggest(y,z));
}