#include <iostream>
#include <fstream>
using namespace std;

class node
{
public:
    int Data;
    node *left;
    node *right;
};

node *ax[50];
node *root;

void inorder(node *rot)
{
    if (rot == NULL)
        return;
    inorder(rot->left);
    cout << rot->Data << " ";
    inorder(rot->right);
}

int main()
{
    ifstream file;
    file.open("my_text.txt");
    int ll[50], rl[50], data[50];
    int i = 1, n;
    while (file >> ll[i])
    {
        file >> data[i];
        file >> rl[i];
        i++;
    }

    n = i - 1;

    file.close();

    for (i = 1; i <= n; i++)
    {
        ax[i] = new node();
    }
    for (i = 1; i <= n; i++)
    {
        ax[i]->Data = data[i];
        ax[i]->left = ax[ll[i]];
        ax[i]->right = ax[rl[i]];
    }
    root = ax[1];
    ax[0] = 0;

    for (i = 1; i <= n; i++)
    {
        cout << ax[i]->left << " " << char(ax[i]->Data) << " " << ax[i]->right << endl;
    }
    inorder(root);
}