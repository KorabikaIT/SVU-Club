//Read Student Roll No, Marks in 3 Subjects and Calculate Total, Avrage and Print it.
#include <iostream>

using namespace std;

int main()
{
    int StuRoNo, mark1, mark2, mark3, avg; 
    cout << "Enter Student Rol No. : ";
    cin >> StuRoNo;
    cout << "\nEnter The Marks of the 3 Subjects: ";
    cin >> mark1 >> mark2 >> mark3;
    avg = (mark1+mark2+mark3)/3;
    cout << "RollNo.\tSub1\tSub2\tSub3\t Avg" << endl;
    cout << StuRoNo <<"\t"<< mark1<<"\t"<< mark2<<"\t"<< mark3<<"\t"<< avg;


}