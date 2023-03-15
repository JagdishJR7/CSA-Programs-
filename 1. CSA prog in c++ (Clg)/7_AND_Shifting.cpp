// write a program that will prompt for the two input of two integer values . Then using shifting ..
// AND Shifting of the Two number ----
// AND symbol :" & "

// in AND : 
//    1 0 1 0 0
//___ 0 1 1 1 0 ___
// =  0 0 1 0 0

// agar same same hai toh vo hi number alag alag hai toh 1

// like : 1 1 = 1 ,  1 0 / 0 1 = 0  , 0 0 = 0

#include <iostream>
using namespace std;

int main()
{
    int n1, n2, r;
    cout << "Enter the 'first' number :";
    cin >> n1;
    cout << "Enter the 'second' number :";
    cin >> n2;

    r = n1 & n2;
    cout << "Result is :" << r << endl;
}