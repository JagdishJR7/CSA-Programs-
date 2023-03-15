// write a program that will prompt for the two input of two integer values . Then using shifting ..
// Right Shifting of the Two number ----
// Right symbol :" >> "

#include <iostream>
using namespace std;

int main()
{
    int n1, n2, r;
    cout << "Enter the 'first' number :";
    cin >> n1;
    cout << "Enter the 'second' number :";
    cin >> n2;

    r = n1 >> n2;
    cout << "Result is :" << r << endl;
}