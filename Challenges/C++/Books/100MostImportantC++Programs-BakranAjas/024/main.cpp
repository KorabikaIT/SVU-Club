//Program to find area of a triangle when there sides are given.
//using the Semi Perimeter
//Area = sqrt(s(s-a)(s-b)(s-c))

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    //inputs ...
    double a, b, c, s, area;
    cout << "Enter Triangle sides: " <<endl;
    cin >> a >> b >> c;
    //calculating ...
    s = 0.5 * (a + b + c);
    area = sqrt(s * (s-a) * (s-b) * (s-c));
    //outputing ...
    cout << "The Area is: " << area;
    return 0;
}