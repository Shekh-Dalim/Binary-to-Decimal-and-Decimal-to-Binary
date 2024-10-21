/*********** Binary to decimal **************/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int ans = 0;
    int i = 1;
    while (n != 0)
    {
        int digit = n % 10;

        if (digit == 1)
        {
            ans = ans + i;
        }

        n = n / 10;
        i = 2 * i;
    }

    cout << " Answer is " << ans << endl;
}
