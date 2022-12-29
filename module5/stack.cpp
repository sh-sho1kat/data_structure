#include <iostream>
using namespace std;
class Stack
{
private:
    int arr[10];
    int top = -1;

public:
    // Stack()
    // {

    //     cout << "Successfully created a stack " << endl;
    // }
    int is_Full()
    {
        if (top == 9)
            return 1;
        else
            return 0;
    }
    int is_EMPTY()
    {
        if (top == -1)
            return 1;
        else
            return 0;
    }
    void PUSH(int data)
    {
        if (is_Full())
        {
            cout << "Sorry , no element can be pushed in the stack as it is full !!!!" << endl;
        }
        else
        {

            arr[++top] = data;
            cout << "Push Successfull!!!" << endl;
            cout << "top is " << top << endl;
            // top += 1;
        }
    }
    void POP()
    {
        if (!is_EMPTY())
        {
            int popedELement = arr[--top];
            cout << "Successfully poped element " << popedELement << endl;

            // top -= 1;
        }
        else
        {
            cout << "The stack is empty !!! " << endl;
        }
    }
    int TOP()
    {
        return arr[top];
    }
    int END() { return arr[0]; }
    void DISPLAY()
    {

        if (!is_EMPTY())
        {
            cout << "Here is the stack :  " << endl;
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "The stack is empty !!! " << endl;
        }
    }
};
void menu()
{
    cout << "****  MENU  ****" << endl;
    cout << " 1 . PUSH " << endl;
    cout << " 2 . POP " << endl;
    cout << " 3 . DISPLAY" << endl;
    cout << " 4 . EXIT " << endl;
    // cout << " 5 . Exit " << endl;

    cout << " Enter your option <1-4>  :  " << endl;
}
int main()
{
    Stack stck;
    while (1)
    {
        menu();
        int options;
        cin >> options;
        switch (options)
        {
        case 1:
            int num;
            cout << "Enter the number to push in stack " << endl;
            cin >> num;
            stck.PUSH(num);
            break;
        case 2:
            stck.POP();
            break;
        case 3:
            stck.DISPLAY();
            break;
        case 4:
            return 0;

        default:
            cout << "Enter a valid options " << endl;
            break;
        }
    }
    // stck.PUSH(5);
    // stck.PUSH(6);
    // stck.DISPLAY();

    return 0;
}