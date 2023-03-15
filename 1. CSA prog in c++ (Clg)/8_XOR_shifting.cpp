// write a program that will prompt for the two input of two integer values . Then using shifting ..
// XOR Shifting of the Two number ----
// XOR symbol :" ^ "

#include <iostream>
using namespace std;

// in XOR : 
//    1 0 1 0 0
//___ 1 1 1 1 0 ___
// =  0 1 0 1 0
// agar number alag alag hai toh 1 or same hai toh 0 

// like : 1 1 = 0 , 0 1 / 0 1 = 1 , 0 0 = 0

int main()
{
    int n1, n2, r;
    cout << "Enter the 'first' number :";
    cin >> n1;
    cout << "Enter the 'second' number :";
    cin >> n2;

    r = n1 ^ n2;
    cout << "Result is :" << r << endl;
}