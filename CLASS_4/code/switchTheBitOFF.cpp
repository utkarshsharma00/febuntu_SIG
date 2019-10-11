#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int num;
    int k;

    cin >> num;
    cin >> k;

    int bitmask = 1 << k;
    if ((num & bitmask) == 0)
    {
        cout << "Bit is off" << endl;
    }
    else
    {
        cout << "Bit is on" << endl;
        int negative_bitmask = ~bitmask;
        num = num & negative_bitmask;
        cout << num;
    }
}
