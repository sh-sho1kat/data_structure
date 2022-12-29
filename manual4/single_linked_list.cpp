#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
};
class linkedlist
{
public:
    node *h;
    node *p;
    node *q;
    node *nn;
    int noN = 0;
    int call = 0;
    linkedlist()
    {
        h = NULL;
    }
    void create();
    void insertt();
    void Delete();
    void update();
    void search();
    void display();
};
int main()
{
    linkedlist l;
    int choice, call = 0;
    while (1)
    {
        cout << endl
             << "*****Menu*****" << endl;
        cout << "1. Create" << endl;
        cout << "2. Insert" << endl;
        cout << "3. Delete" << endl;
        cout << "4. Update" << endl;
        cout << "5. Search" << endl;
        cout << "6. Display" << endl;
        cout << "7.Exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        if (choice == 1)
        {
            l.linkedlist::create();
            call = 1;
        }

        else if (choice == 2)
        {
            if (call == 1)
            {
                l.linkedlist::insertt();
            }
            else
            {
                cout << "\tCreate a Linked List First" << endl
                     << endl;
                l.linkedlist::create();
                call = 1;
            }
        }
        else if (choice == 3)
        {
            if (call == 1)
            {
                l.linkedlist::Delete();
            }
            else
            {
                cout << "\tCreate a Linked List First" << endl
                     << endl;
                l.linkedlist::create();
                call = 1;
            }
        }
        else if (choice == 4)
        {
            if (call == 1)
            {
                l.linkedlist::update();
            }
            else
            {
                cout << "\tCreate a Linked List First" << endl
                     << endl;
                l.linkedlist::create();
                call = 1;
            }
        }
        else if (choice == 5)
        {
            if (call == 1)
            {
                l.linkedlist::search();
            }
            else
            {
                cout << "\tCreate a Linked List First" << endl
                     << endl;
                l.linkedlist::create();
                call = 1;
            }
        }
        else if (choice == 6)
        {
            if (call == 1)
            {
                l.linkedlist::display();
            }
            else
            {
                cout << "\tCreate a Linked List First" << endl
                     << endl;
                l.linkedlist::create();
                call = 1;
            }
        }
        else if (choice == 7)
        {
            cout << "\tExit from Menu" << endl;
            break;
        }

        else
        {
            cout << "\tPlease Enter (1-6)" << endl;
        }
    }
}
void linkedlist::create()
{
    int nodeNum;
    cout << "\tHow Many Nodes Want To Start With:";
    cin >> nodeNum;
    for (int i = 0; i < nodeNum; i++)
    {
        nn = new node;
        int num;
        cout << "\tEnter a Number:";
        cin >> num;
        nn->data = num;
        nn->next = NULL;
        if (h == NULL)
        {
            h = nn;
        }
        else

            if (p != NULL)
            p->next = nn;
        p = nn;

        noN++;
    }
    call = 1;
    cout << "\t\tSUCCESSFULLY CREATED!!" << endl
         << endl;
}
void linkedlist::display()
{
    cout << "\t" << noN << " NODES HAVE BEEN CREATED." << endl;
    cout << "\tVALUES ARE";
    p = h;
    while (p != NULL)
    {
        cout << "-->" << p->data;
        p = p->next;
    }
    cout << endl
         << endl;
}
void linkedlist::insertt()
{
    int x, y;
    cout << "\t Enter Number To Insert:";
    cin >> x;
    cout << endl;
    p = h;
    cout << "\tPresent Values " << endl;
    while (p != NULL)
    {
        cout << "\t" << p->data;
        p = p->next;
    }
    cout << endl;
    cout << "\t After Which Number To Insert:";
    cin >> y;
    nn = new node;
    nn->data = x;
    nn->next = NULL;
    p = h;
    int i = 0;
    while (p->next != NULL)
    {
        if (p->data == y)
        {
            nn->next = p->next;
            p->next = nn;
            noN++;
            cout << "\n\t\tSUCCESSFULLY INSERTED!!" << endl
                 << endl;
            i++;
            break;
        }
        else
            p = p->next;
    }
    if (i == 0 && p->data == y)
    {
        p->next = nn;
        nn->next = NULL;
        noN++;
        cout << "\n\t\tSUCCESSFULLY INSERTED!!" << endl
             << endl;
    }
    else if (i == 0 && p->data != y)
    {
        cout << "\t " << y << " IS NOT FOUND" << endl
             << endl;
    }
}
void linkedlist::Delete()
{
    p = h;
    cout << "\tPRESENT VALUES " << endl;
    while (p != NULL)
    {
        cout << "\t" << p->data;
        p = p->next;
    }
    cout << endl;
top:
    int num;
    cout << "\tENTER A NUMBER TO DELETE:";
    cin >> num;
    p = h;
    q = NULL;
    int i = 0;
    if (p == h && p->data == num)
    {
        h = h->next;
        noN--;
        cout << "\n\t\tSUCCESSFULLY DELETED!!" << endl
             << endl;
    }
    else
    {
        while (p->next != NULL && p->data != num)
        {
            q = p;
            p = p->next;
            i++;
        }

        if (p->data != num)
        {
            cout << "\tYOUR GIVEN DATA IS NOT FOUND!!" << endl
                 << endl;
        option:
            cout << "\tDO YOU ENTER AGAIN??" << endl;
            cout << "\t1.YES" << endl;
            cout << "\t2.NO" << endl
                 << "\t";
            int ch;
            cin >> ch;
            if (ch == 1)
            {
                goto top;
            }

            else
            {
                cout << "\n\tPLEASE ENTER (1-2)" << endl;
                goto option;
            }
        }
        q->next = p->next;
        delete p;
        cout << "\n\t\tSUCCESSFULLY DELETED!!" << endl
             << endl;
        noN--;
    }
}
void linkedlist::update()
{
    int x, y;
    int i = 0;
    cout << "\tWANT TO UPDATE VALUE:";
    cin >> x;
    cout << "\n\tWITH VALUE:";
    cin >> y;
    p = h;
    while (p->next != NULL)
    {
        if (p->data == x)
        {
            p->data = y;
            i++;
            cout << "\n\t\tSUCCESSFULLY UPDATED!!" << endl
                 << endl;
            break;
        }
        p = p->next;
    }
    if (i == 0 && p->data == x)
    {
        p->data = y;
        cout << "\n\t\tSUCCESSFULLY UPDATED!!" << endl
             << endl;
    }
    if (i == 0 && p->data != x)
    {
        cout << "\tYOUR GIVEN DATA IS NOT FOUND!!" << endl;
    }
}
void linkedlist::search()
{
    int num;
    cout << "\n\tENTER NUMBER TO SEARCH: ";
    cin >> num;
    p = h;
    int i = 0;
    while (p->next != NULL)
    {
        if (p->data == num)
        {
            cout << "\tFOUND AT NODE NO. " << i + 1 << endl;
            i++;
            break;
        }
        p = p->next;
    }
    if (i == 0)
    {
        cout << "\tYOUR GIVEN DATA IS NOT FOUND!!" << endl;
    }
}