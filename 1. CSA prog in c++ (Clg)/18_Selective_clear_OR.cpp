#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    cout << "Enter the First Binary Number : ";
    cin >> a;
    cout << "Enter the second Binary Number : ";
    cin >> b;

    // Validate input
    bool valid_input = true;
    if (a.length() != b.length())
    {
        valid_input = false;
        cout << "Error: Binary numbers must be of equal length." << endl;
    }
    for (char c : a)
    {
        if (c != '0' && c != '1')
        {
            valid_input = false;
            cout << "Error: Input must be a binary number." << endl;
            break;
        }
    }
    for (char c : b)
    {
        if (c != '0' && c != '1')
        {
            valid_input = false;
            cout << "Error: Input must be a binary number." << endl;
            break;
        }
    }
    if (!valid_input)
    {
        return 1;
    }

    int len = b.length();
    string result = a;
    for (int i = 0; i < len; i++)
    {
        if (b[i] == '1')
        {
            result[i] = '0';
        }
    }
    cout << "Selective clear OR result is : " << result;
    return 0;
}