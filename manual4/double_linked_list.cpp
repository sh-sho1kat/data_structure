#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev; // Doubbly linked list
};

class ll
{
public:
    node *h, *tail, *newnode, *prevnode, *nextnode, *temp;
    bool flag = false;
    int total;
    int position;

    void create()
    {

        int x, choice = 1;
        h = NULL;
        cout << "How many elements?" << endl;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << "Enter data to input: " << endl;
            cin >> x;
            newnode = new node();
            newnode->data = x;
            if (h == NULL)
            {
                h = tail = newnode;
                h->next = h;
                h->prev = h;
            }
            else
            {
                tail->next = newnode;
                newnode->prev = tail;
                newnode->next = h;
                h->prev = newnode;
                tail = newnode;
            }
        }
        total = n;
        flag = true;
    }
    void display()
    {
        if (flag)
        {
            cout << endl;
            for (temp = h; temp != tail; temp = temp->next)
            {
                cout << temp->data << endl;
            }
            cout << temp->data;
            cout << endl;
        }
        else
        {
            cout << "Linked_list is not created" << endl;
        }
    }
    void insert()
    {
        if (flag)
        {
            display();
            cout << "Where to insert?" << endl;
            cin >> position;
            if (position == 0)
            {
                insert_at_first();
                cout << "Successfully Inserted" << endl;
            }
            else if (position == total)
            {
                insert_at_last();
                cout << "Successfully Inserted" << endl;
            }
            else if (position > total)
            {
                cout << "No such position exist" << endl;
            }
            else
            {
                insert_at_middle_or_any();
                cout << "Successfully Inserted" << endl;
            }
        }
        else
        {
            cout << "Linked_list is not created" << endl;
        }
    }
    void insert_at_first()
    {
        total++;
        // display();
        int x;
        newnode = new node();
        // cout << "This section is for inserting at first" << endl;
        cout << "Enter Element: " << endl;
        cin >> x;
        newnode->data = x;
        newnode->next = h;
        h->prev = newnode;
        newnode->prev = tail;
        tail->next = newnode;
        h = newnode;
    }
    void insert_at_last()
    {
        total++;
        // display();
        int x;
        newnode = new node();
        // cout << "This section is for inserting at last" << endl;
        cout << "Enter Element: " << endl;
        cin >> x;
        newnode->data = x;
        newnode->prev = tail;
        tail->next = newnode;
        newnode->next = h;
        h->prev = newnode;
        tail = newnode;
    }
    void insert_at_middle_or_any()
    {
        total++;
        temp = h;
        int pos, x, i = 1;
        // cout << "Enter Position: " << endl;
        // cin >> pos;
        newnode = new node();
        cout << "Enter Data: " << endl;
        cin >> x;
        newnode->data = x;
        while (i < (position - 1))
        {
            temp = temp->next;
            i++;
        }
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next->prev = newnode;
        temp->next = newnode;
    }

    void Delete()
    {
        if (flag == false)
        {
            cout << "Linked list is not created" << endl;
        }
        else
        {
            display();
            cout << "Enter position" << endl;
            cin >> position;
            if (position == 1)
            {
                delete_at_start();
                total--;
            }
            else if (position == total)
            {
                delete_at_end();
                total--;
            }
            else if (position > total)
            {
                cout << "No such Position Exist" << endl;
            }
            else
            {
                delete_at_middle_or_any();
                total--;
            }
        }
    }
    void delete_at_start()
    {
        temp = h;
        if (h == NULL)
        {
            cout << "List is Empty! " << endl;
        }
        else if (h->next == h)
        {
            h = tail = NULL;
        }
        else
        {
            h = h->next;
            h->prev = tail;
            tail->next = h;
            cout << "Successfully Deleted!!!" << endl;
        }
    }
    void delete_at_end()
    {

        temp = tail;
        if (h == NULL)
        {
            cout << "List is Empty! " << endl;
        }
        else if (h->next == h)
        {
            h = tail = NULL;
        }
        else
        {
            tail = tail->prev;
            tail->next = h;
            h->prev = tail;
            cout << "Successfully Deleted!!!" << endl;
        }
    }
    void delete_at_middle_or_any()
    {
        display();
        int pos, x;
        temp = h;

        for (int i = 1; i < position; i++)
        {
            temp = temp->next;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        if (temp->next == h)
        {
            tail = temp->prev;
        }
        // cout << "Enter Position: " << endl;
        // cin >> pos;
        cout << "Successfully Deleted!!!" << endl;
    }
};

int main()
{
    ll a;
    for (;;)
    {
        int option;
        cout << "********* Menu ********" << endl;
        cout << "1. Create" << endl;
        cout << "2. Insert" << endl;
        cout << "3. Delete" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your option[1-5]:" << endl;
        cin >> option;
        if (option == 5)
        {
            break;
        }
        switch (option)
        {
        case 1:
            a.create();
            break;
        case 2:
            a.insert();
            break;
        case 3:
            a.Delete();
            break;
        case 4:
            a.display();
            break;
        }
    }
    return 0;
}
