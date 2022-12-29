#include <iostream>
using namespace std;

void TOH(int n, char Sour, char Aux, char Des)
{
    if (n == 1)
    {
        // cout << n << " " << Sour << " " << Aux << " " << Des << endl;
        cout << "Move Disk " << n << " from " << Sour << " to " << Des << endl;
        return;
    }
    // cout << n - 1 << " " << Sour << " " << Aux << " " << Des << endl;
    TOH(n - 1, Sour, Des, Aux);
    // cout << n - 1 << " " << Sour << " " << Aux << " " << Des << endl;
    cout << "Move Disk " << n << " from " << Sour << " to " << Des << endl;
    TOH(n - 1, Aux, Sour, Des);
}
int main()
{
    int n;

    cout << "Enter no. of disks:";
    cin >> n;
    int source = n;
    int auxilary = 0;
    int destination = 0;
    TOH(n, 'A', 'B', 'C');

    return 0;
}