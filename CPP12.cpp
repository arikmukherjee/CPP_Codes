#include <iostream>
using namespace std;

#define max 30
class stack
{
    int a[max], top;

    public:
    stack()
    {
        top = -1;
    }

    void push(int n)
    {
        if(top == max-1)
        {
            cout<<"stack overflow"<<endl;
            return;
        }
        top++;
        a[top]=n;
    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"stack underflow"<<endl;
            return;
        }
        int n=a[top];
        cout<<"popped element"<<a[top]<<endl;
        top--;
    }
    void display()
    {
        if(top == -1)
        {
            cout<<"empty stack"<<endl;
        }
        else
        {
            for(int i=top;i>=0;i--)
            {
                cout<<a[i]<<endl;
            }
        }
    }

    void peek()
    {
        if(top == -1)
        {
            cout<<"empty stack"<<endl;
        }
        else
        {
            cout<<a[top]<<endl;
        }
    }
};

int main()
{
    stack ob;
    while(1)
    {
        cout<<"enter 1 for push"<<endl;
        cout<<"enter 2 for pop"<<endl;
        cout<<"enter 3 for display"<<endl;
        cout<<"enter 4 for peep"<<endl;
        cout<<"enter 5 for exit"<<endl;

        int choice;
        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<"enter a value for push operation"<<endl;
            int n;
            cin>>n;
            ob.push(n);
            break;
        case 2:
            ob.pop();
            break;
        case 3:
            ob.display();
            break;
        case 4:
            ob.peek();
            break;
        case 5:
            cout<<"end of program"<<endl;
            break;
        default:
            cout<<"invalid option"<<endl;
        }
        if(choice==5)
        break;
    }
}

