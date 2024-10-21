
/********************** HW write a code to convert -ve decimal number to binary ************************/
#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << "Answer is 0" << endl;
        return 0;
    }

    bool isNegative = n < 0;
    unsigned int num;

    if (isNegative)
    {
        num = ~(-n) + 1; // Two's complement for negative number
    }
    else
    {
        num = n;
    }

    string binaryRepresentation = "";

    while (num != 0)
    {
        int bit = num & 1; // Extracting the least significant bit
        binaryRepresentation = to_string(bit) + binaryRepresentation;
        num = num >> 1; // Shift right by one bit
    }

    if (isNegative)
    {
        // Extend the binary representation to 32 bits and convert to two's complement
        while (binaryRepresentation.length() < 32)
        {
            binaryRepresentation = "1" + binaryRepresentation;
        }
    }

    cout << "Answer is " << binaryRepresentation << endl;
    return 0;
}
