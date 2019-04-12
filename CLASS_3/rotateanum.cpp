#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int number, rotation;
    cout << "Enter the number and rotation factor" << endl;
    cin >> number >> rotation;

    int no_ofdigits = 0;
    int safe = number;
    while (number != 0)
    {
        no_ofdigits++;
        number = number / 10;
    }
    number = safe;

    rotation = rotation % no_ofdigits;
    rotation = (rotation < 0) ? rotation + no_ofdigits : rotation;
    int multiplier = 1;
    int divisor = 1;
    for (int i = 1; i <= no_ofdigits; i++)
    {
        if (i <= rotation)
        {
            divisor = divisor * 10;
        }
        else
        {
            multiplier = multiplier * 10;
        }
    }

    int remainder = number % divisor;
    int quotient = number / divisor;
    int ans = (remainder * multiplier) + quotient;
    cout << ans;
}
