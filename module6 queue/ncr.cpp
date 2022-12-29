#include <iostream>
using namespace std;

int fact(int n, int r)
{
    if (r == 1)
    {
        return n;
    }
    if (r == 0)
    {
        return 1;
    }
    if (n == r)
    {
        return 1;
    }
    return fact(n - 1, r - 1) + fact(n - 1, r);
}

int main()
{
    int n, r;
    cin >> n >> r;
    int ans = fact(n, r);
    cout << ans << endl;
    return 0;
}