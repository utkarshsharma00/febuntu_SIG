// This logic has been put forward by Pushp of CSE B.

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int num;
    cin >> num;

    int k;
    cin >> k;

    int x = num >> (k - 1);

    if (x % 2 == 0)
    {
        cout << "OFF";
    }
    else
    {
        cout << "ON";
    }
}
