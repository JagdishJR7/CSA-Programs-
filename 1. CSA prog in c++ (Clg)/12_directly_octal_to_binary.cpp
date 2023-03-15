#include <iostream>
#include <cmath>
using namespace std;

long long octalToBinary(int octalNumber)
{
    int decimalNumber = 0, i = 0;

    // Step 1: Convert each octal digit to a 3-digit binary number
    while (octalNumber != 0)
    {
        int digit = octalNumber % 10;
        octalNumber /= 10;

        // Convert the octal digit to binary using the table from the previous answer
        int binaryDigit = 0, j = 1;
        while (digit != 0)
        {
            binaryDigit += (digit % 2) * j;
            j *= 10;
            digit /= 2;
        }

        // Concatenate the 3-digit binary numbers
        decimalNumber += binaryDigit * pow(1000, i);
        ++i;
    }

    // Step 2: Convert the decimal number to binary
    long long binaryNumber = 0, j = 1;
    while (decimalNumber != 0)
    {
        binaryNumber += (decimalNumber % 2) * j;
        j *= 10;
        decimalNumber /= 2;
    }

    return binaryNumber;
}

int main()
{
    int octalNumber;

    cout << "Enter an octal number: ";
    cin >> octalNumber;

    long long binaryNumber = octalToBinary(octalNumber);

    cout << "The binary equivalent of " << octalNumber << " is " << binaryNumber << endl;

    return 0;
}
