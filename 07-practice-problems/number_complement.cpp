#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    // Special case
    if(num == 0)
    {
        cout << 1;
        return 0;
    }

    int ans = 0;
    int mul = 1;

    while(num > 0)
    {
        int rem = num % 2;   // binary digit

        // complement the bit
        if(rem == 0)
            rem = 1;
        else
            rem = 0;

        // directly convert complemented binary to decimal
        ans = ans + rem * mul;

        mul = mul * 2;
        num = num / 2;
    }

    cout << ans;
}