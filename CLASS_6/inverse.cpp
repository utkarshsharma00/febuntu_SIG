#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int arr[] = {4, 2, 0, 1, 3};
    int n = sizeof(arr) / sizeof(int);

    int inv[n];
    for (int idx = 0; idx < n; idx++)
    {
        int value = arr[idx]; //or can be simply done as inv[arr[idx]] = idx; this saves the memory created by temp
        inv[value] = idx;
    }
    for (int i = 0; i < n; i++)
    {
        cout << inv[i] << " ";
    }
}
