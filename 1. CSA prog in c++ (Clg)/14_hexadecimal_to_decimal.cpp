#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int hexadecimalToDecimal(string hexNumber)
{
    int decimalNumber = 0;
    int power = 0;

    for (int i = hexNumber.size() - 1; i >= 0; i--)
    {
        char hexDigit = hexNumber[i];
        int digitValue;

        if (hexDigit >= '0' && hexDigit <= '9')
        {
            digitValue = hexDigit - '0';
        }
        else if (hexDigit >= 'a' && hexDigit <= 'f')
        {
            digitValue = hexDigit - 'a' + 10;
        }
        else if (hexDigit >= 'A' && hexDigit <= 'F')
        {
            digitValue = hexDigit - 'A' + 10;
        }
        else
        {
            // Invalid hexadecimal digit
            return -1;
        }

        decimalNumber += digitValue * pow(16, power);
        power++;
    }

    return decimalNumber;
}

int main()
{
    string hexNumber;
    cout << "Enter a hexadecimal number: ";
    cin >> hexNumber;

    int decimalNumber = hexadecimalToDecimal(hexNumber);

    if (decimalNumber == -1)
    {
        cout << "Invalid hexadecimal number";
    }
    else
    {
        cout << "Conversion in Decimal no: "<< decimalNumber;
    }

    return 0;
}
