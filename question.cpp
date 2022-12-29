#include <iostream>
using namespace std;

class node
{
public:
    int d;
    node *ll;
    node *rl;
};

node *ax[105];
node *h;

int sh_array[105];
int sh_stack[105];
int sh_queue[105];

int n = 100;
int top = -1;
int front = 0;
int rear = 0;

void array_operation()
{
    for (int sh = 0; sh < n; sh++)
    {
        int tmp;
        cin >> tmp;
        sh_array[sh] = tmp;
    }
}
void array_to_stacks()
{
    for (int sh = 0; sh < n; sh++)
    {
        top++;
        sh_stack[top] = sh_array[sh];
    }
}
void stacks_to_queue()
{
    int rear = 0;
    while (top != -1)
    {
        sh_queue[rear] = sh_stack[top];
        top--;
        rear++;
    }
}
void BST()
{
    int n, x, i, j, ll[50], data[50], rl[50];
    i = 1;
    while (file >> ll[i])
    {
        file >> data[i];
        file >> rl[i];
        i++;
    }
    while (front != rear)
    {
        data[i] = sh_queue[front];
        front++;
    }
    for (int i = 1; i <= n; i++)
    {
        ax[i] = new node();
    }
    for (int i = 1; i <= n; i++)
    {
        ax[i]->d = sh_queue[front];
        front++;
    }
    

    n = i - 1;
    for (j = 1; j <= n; j++)
        cout << ll[j] << " " << data[j] << " " << rl[j] << endl;
    for (i = 1; i <= n; i++)
    {
        ax[i] = new node();
        cout << i << " " << ax[i] << endl;
    }
    h = ax[1];
    ax[0] = 0;
    for (i = 1; i <= n; i++)
    {
        ax[i]->d = data[i];
        ax[i]->ll = ax[ll[i]];
        ax[i]->rl = ax[rl[i]];
    }
    for (i = 1; i <= n; i++)
    {
        cout << ax[i]->ll << " " << char(ax[i]->d) << " " << ax[i]->rl << endl;
    }
}
int main()
{
}