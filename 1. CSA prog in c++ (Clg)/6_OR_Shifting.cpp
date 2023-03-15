// write a program that will prompt for the two input of two integer values . Then using shifting ..
// OR Shifting of the Two number ----
// OR symbol :" | "
// in or : 
//    1 0 1 0 0
//___ 0 1 1 1 0 ___
// =  1 1 1 1 0

// agar unme se koi bhi ek 1 hai toh 1 hi hoga same numbers per bhi 1 , 0 tabhi hi hoga jab dono number 0 hai !

// like : 1 1 = 1 , 1 0 / 0 1 = 1 , 0 0 = 0

#include <iostream>
using namespace std;
int main()
{
  int n1, n2, r;
  cout << "Enter the 'first' number :";
  cin >> n1;
  cout << "Enter the 'second' number :";
  cin >> n2;

  r = n1 | n2;
  cout << "Result is :" << r << endl;
}