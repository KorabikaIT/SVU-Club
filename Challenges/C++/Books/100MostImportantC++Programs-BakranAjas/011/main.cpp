//
#include <iostream>

using namespace std;

int main(){
    int x1, x2, temp;
    cout << "Enter Two Intgers: " << endl;
    cin >> x1 >> x2;
    cout << "X1 = " << x1 << ", X2 = " << x2 << endl << "Swapping ..." << endl;
    temp = x1;
    x1 = x2;
    x2 = temp;
    cout << "X1 = " << x1 << ", X2 = " << x2 << endl;
    return 0;
    
}