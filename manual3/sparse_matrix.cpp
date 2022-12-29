#include <bits/stdc++.h>
using namespace std;
#define ll long long

class sparse
{
private:
    ll row, column;
    ll a[100][100];
    ll b[100][5];
    ll k = 0;

public:
    void setdata()
    {
        cout << "Enter The Number of Rows And Columns : ";
        cin >> row >> column;
        cout << "Enter THe Elements of the Array" << endl;
        for (ll i = 0; i < row; i++)
        {
            for (ll j = 0; j < column; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void sparse_matrix()
    {
        for (ll i = 0; i < row; i++)
        {
            for (ll j = 0; j < column; j++)
            {
                if (a[i][j] != 0)
                {
                    k++;
                    b[k][0] = i;
                    b[k][1] = j;
                    b[k][2] = a[i][j];
                }
            }
        }
        b[0][0] = row;
        b[0][1] = column;
        b[0][2] = k;
    }
    void showdata()
    {
        cout << "-----------------------" << endl;
        cout << "| Rows|"
             << "Columns| "
             << "Values|" << endl;
        cout << "-----------------------" << endl;
        cout << "| " << b[0][0] << "   |   " << b[0][1] << "   |   " << b[0][2] << "  |" << endl;
        cout << "-----------------------" << endl;
        for (ll i = 1; i <= k; i++)
        {
            cout << "| ";
            for (ll j = 0; j < 3; j++)
            {
                cout << b[i][j] << "   |   ";
            }
            cout << endl;
            cout << "-----------------------" << endl;
        }
    }
};

int main()
{
    sparse matrix;
    matrix.setdata();
    matrix.sparse_matrix();
    matrix.showdata();
    return 0;
}