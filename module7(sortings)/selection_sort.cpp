#include <iostream>
using namespace std;

int main()
{
    int a[8] = {9, 8, 5, 3, 10, 7, 3, 1};
    int n = 8;
    int tmp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int k = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[k] > a[j])
            {
                k = j;
            }
        }
        tmp = a[i];
        a[i] = a[k];
        a[k] = tmp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}