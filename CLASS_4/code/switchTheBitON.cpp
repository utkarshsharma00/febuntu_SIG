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
        num = (num | bitmask);
        cout << num;
    }
    else
    {
        cout << "Bit is on" << endl;
    }
}
