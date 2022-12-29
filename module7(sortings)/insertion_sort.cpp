#include <iostream>
using namespace std;

int main()
{
    int a[8] = {9, 8, 5, 3, 7, 3, 1, 10};
    int n = 8;
    for (int i = 1; i < n; i++)
    {
        int key;
        key = a[i];
        int j = i - 1;
        while ((j >= 0) && (a[j] > key))
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}