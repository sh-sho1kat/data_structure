#include <bits/stdc++.h>
using namespace std;

class arrays
{
private:
    int a[1000];
    int found[1000];
    int n = 0;
    int count = -1;

public:
    void initialize()
    {
        for (int i = 0; i < 1000; i++)
        {
            found[i] = -1;
        }
    }
    void create()
    {
        void initialize();
        cout << "How many element:" << endl;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << endl
                 << "Enter element #" << i << ":";
            cin >> a[i];
        }
    }
    void linear_search()
    {
        if (n == 0)
        {
            cout << "Array is not Created" << endl;
        }
        else
        {
            count = 0;
            int j = 0;
            bool flag = true;
            cout << "Enter an element to be searched" << endl;
            int s;
            cin >> s;
            for (int i = 0; i < n; i++)
            {
                if (s == a[i])
                {
                    cout << "Array is found at index : " << i << endl;
                    flag = false;
                }
            }
            if (flag)
            {
                cout << "Element is not found" << endl;
            }
        }
    }
    void sort()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    int tmp = a[i];
                    a[i] = a[j];
                    a[j] = tmp;
                }
            }
        }
    }
    void binary_search()
    {
        if (n == 0)
        {
            cout << "Array is not Created" << endl;
        }
        else
        {
            count = 0;
            int j = 0;
            bool flag = true;
            cout << "Enter an element to be searched" << endl;
            int x;
            cin >> x;
            void sort();
            int mid, l = 0, r = n - 1;
            while (r >= l)
            {
                mid = l + (r - l) / 2;
                if (a[mid] == x)
                {
                    cout << "Element is found" << endl;
                    flag = false;
                    break;
                }
                if (a[mid] > x)
                {
                    r = mid - 1;
                }
                if (a[mid] < x)
                {
                    l = mid + 1;
                }
            }
            if (flag)
            {
                cout << "Element is not found" << endl;
            }
        }
    }
    void display()
    {
        if (n == 0)
        {
            cout << "Array is not created" << endl;
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
};

int main()
{
    int option;
    arrays a;
    int i = 0;
    int t = 1;

    while (t)
    {
        cout << endl;
        cout << endl;
        cout << "******** Menu ********" << endl;
        cout << "1. Create" << endl;
        cout << "2. Linear Search" << endl;
        cout << "3. Binary Search" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter Your Option(1 - 5): " << endl;
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "You Entered " << option << endl;
            a.create();
            break;
        case 2:
            cout << "You Entered " << option << endl;
            a.linear_search();

            break;
        case 3:
            cout << "You Entered " << option << endl;
            a.binary_search();
            break;
        case 4:
            cout << "You Entered " << option << endl;
            a.display();
            break;
        case 5:
            cout << "Succesfully Exited!!!" << endl;
            t = 0;
            break;
        default:
            cout << "Invalid Option" << endl;
            cout << "Please Enter a Valid Option" << endl;
        }
    }
}