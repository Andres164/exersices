#include <iostream>

using namespace std;

string decimalToHexadecimal(int decimalNumber);

int main()
{
    cout << "4095: " << decimalToHexadecimal(4095) << endl;
    cout << "1024: " << decimalToHexadecimal(1024) << endl;
    cout << "699: " << decimalToHexadecimal(699) << endl;
    cout << "8659: " << decimalToHexadecimal(8659) << endl;
}

string decimalToHexadecimal(int decimalNumber)
{
    int quotient = decimalNumber/16;
    int residue = decimalNumber%16;
    string hexadecimalValue = "";
    if(quotient != 0)
        hexadecimalValue += decimalToHexadecimal(quotient);

    if(residue > 9)
    {
        switch(residue)
        {
        case 10:
            hexadecimalValue += "A";
            break;
        case 11:
            hexadecimalValue += "B";
            break;
        case 12:
            hexadecimalValue += "C";
            break;
        case 13:
            hexadecimalValue += "D";
            break;
        case 14:
            hexadecimalValue += "E";
            break;
        case 15:
            hexadecimalValue += "F";
            break;
        }
    } else
        hexadecimalValue += to_string(residue);
    return hexadecimalValue;
}
