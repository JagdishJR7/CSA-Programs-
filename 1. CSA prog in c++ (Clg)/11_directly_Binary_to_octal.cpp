// In this we directly convert binary number to octal , in privious one what we did is that , we converted binary to decimal and then decimal to octal !!!


#include <iostream>
#include <cmath>
using namespace std;

int binaryToOctal(long long binaryNumber)
{
    int octalNumber = 0, i = 0;

    // Step 1: Group binary digits into groups of three
    while (binaryNumber != 0)
    {
        int digit = binaryNumber % 1000; // Get the last three digits
        binaryNumber /= 1000;            // Discard the last three digits

        // Step 2: Convert the group of three binary digits to octal
        int octalDigit = 0, j = 1;
        while (digit != 0)
        {
            octalDigit += (digit % 10) * j;
            j *= 2;
            digit /= 10;
        }

        // Step 3: Concatenate the octal digits
        octalNumber += octalDigit * pow(10, i);
        ++i;
    }

    return octalNumber;
}

int main()
{
    long long binaryNumber;

    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    int octalNumber = binaryToOctal(binaryNumber);

    cout << "Conversion in Octal number is : "<< octalNumber << endl;

    return 0;
}
