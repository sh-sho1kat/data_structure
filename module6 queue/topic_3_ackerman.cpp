#include <bits/stdc++.h>
using namespace std;

int ack(int m, int n)
{
    if (m == 0)
    {
        cout << m << " " << n << endl;
        return n + 1;
    }
    else if ((m > 0) && (n == 0))
    {
        cout << m << " " << n << endl;
        return ack(m - 1, 1);
    }
    else if ((m > 0) && (n > 0))
    {
        cout << m << " " << n << endl;
        return ack(m - 1, ack(m, n - 1));
    }
}

int main()
{
    int m, n;
    cout << "Enter values of m and n respectively: " << endl;
    cin >> m >> n;
    cout << "Ackerman answer: " << ack(m, n);
    return 0;
}