// write a program to convert the binary number into octal number :--
// binary --- 10101010
// octal --- base 1 - 8 ;

#include <iostream>
#include <math.h>
using namespace std;



bool isbinary(int num)
{
    while (num)
    {
        if (num % 10 > 1)
            return false;
        num /=10;
    }
    return true;
}

int main()
{
    int num, i = 0, rem, result = 0, A[20], b = 0, j = 0;
    cout << "Enter the Binary number :";
    cin >> num;

    // Checking whether the input is valid or not :
    if(!isbinary(num)){
        cout<<"Invalid input, The entered number is not binary number."<<endl;
        return 0;
    }

    // Binary to decimal :
    cout << "decimal number is : ";
    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        result += rem * pow(2, i);
        ++i;
    }
    cout << result << endl;
    // decimal to octal :
    // int;
    while (result > 0)
    {
        A[b] = result % 8;
        result = result / 8;
        b++;
    }
    cout << "Now octal number is : ";
    for (j = b - 1; j >= 0; j--)
        cout << A[j];
    {
    }
    return 0;
}
