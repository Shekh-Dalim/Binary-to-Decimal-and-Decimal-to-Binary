/******************  Decimal to binary************************/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    int i = 1; // Represents the place value in binary
    while (n != 0)
    {

        int bit = n & 1; // Extracting the least significant bit

        ans = (bit * i) + ans;

        n = n >> 1;  // Shift right by one bit
        i = i*10;    // Update 'i'' value
    }

    cout << " Answer is " << ans << endl;
    return 0;
}
