#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file;
    file.open("my_text.txt");
    int n, x, i, j, ll[50], data[50], rl[50];
    i = 1;
    while (file >> ll[i])
    {
        file >> data[i];
        file >> rl[i];
        i++;
    }

    n = i - 1;
    for (j = 1; j <= n; j++)
        cout << ll[j] << " " << data[j] << " " << rl[j] << endl;
    file.close();
}