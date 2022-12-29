#include <iostream>
using namespace std;

int partition(int a[], int p, int r)
{
    int x, t, i;
    x = a[r];
    i = p - 1;
    for (int j = p; j <= r - 1; j++)
    {
        if (a[j] <= x)
        {
            i++;

            t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    t = a[i + 1];
    a[i + 1] = a[r];
    a[r] = t;

    return (i + 1);
}

void qsort(int a[], int p, int r)
{
    int q;
    if (p < r)
    {
        q = partition(a, p, r);
        qsort(a, p, q - 1);
        qsort(a, q + 1, r);
    }
    return;
}
int main()
{
    int a[7] = {5, 7, 6, 1, 3, 4, 9};
    int l, r;
    l = 0, r = 6;
    qsort(a, l, r);
    for (int i = l; i <= r; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}