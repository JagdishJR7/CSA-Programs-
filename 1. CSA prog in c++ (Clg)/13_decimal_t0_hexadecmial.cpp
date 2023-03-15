// Hexadecimal :- to convert Into Hexadecimal we use base-16 number system.
// Symbol :- ( 0 - 9 ) and A - F !
// 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,(10-A, 11-B, 12-C, 13-D, 14-E, 15-F)

#include <iostream>
// #include <math.h>
#include <string>
using namespace std;

string decimalToHexadecimal(int num) {

    // if (num<0){
    //     return "Invalid Number, Please Input Valid number. ";
    // }

     if (num == 0) return "0";
    if (num < 0) return "-" + decimalToHexadecimal(-num);

    char digits[] = "0123456789ABCDEF";

    string hexadecimalNumber = "";

    int rem;
    while (num > 0)
    {
        rem = num % 16;
        num = num / 16;

        hexadecimalNumber = digits[rem] + hexadecimalNumber;
    }
    return hexadecimalNumber;
}

int main()
{
    int num;
    cout << "Enter a decimal number : ";
    cin >> num;

    string hexadecimalNumber = decimalToHexadecimal(num);
    cout << "Conversion in Hexadecimal no. : " << hexadecimalNumber;

    return 0;
}