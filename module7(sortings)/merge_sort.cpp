#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define pf push_front
#define mp make_pair
#define ff first
#define ss second
#define fr(s, n) for (ll i = s; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

#define ok cout << "Eureka" << nl
#define ap(arr, n)             \
    for (ll i = 0; i < n; i++) \
        cout << arr[i] << " "; \
    cout << nl;

ll a[7] = {8, 4, 5, 3, 2, 7, 1};
ll b[7];
ll n = 6;

void dispaly()
{
    cout << "The array is" << nl;
    for (ll i = 0; i <= n; i++)
        cout << a[i] << " ";
    cout << nl;
}

void merge(ll low, ll mid, ll high)
{
    ll i = low;
    ll j = mid + 1;
    ll k = low;
    while (i <= mid && j <= high)
    {
        if (a[i] <= a[j])
        {
            b[k++] = a[i++];
        }
        else
        {
            b[k++] = a[j++];
        }
    }
    for (ll p = i; p <= mid; p++)
    {
        b[k++] = a[p];
    }
    for (ll p = j; p <= high; p++)
    {
        b[k++] = a[p];
    }
    for (i = low; i <= high; i++)
    {
        a[i] = b[i];
    }
}

void merge_sort(ll low, ll high)
{
    ll mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        merge_sort(low, mid);
        merge_sort(mid + 1, high);
        merge(low, mid, high);
    }
}

int main()
{
    fastio;
    ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
    bool flag = true;
    dispaly();
    merge_sort(0, n);
    dispaly();
    // ap(b, n + 1);
    return SH;
}