#include <iostream>
using namespace std;

class array
{
    int a[30], n;

public:
    void input()
    {
        cout << "Enter the length" << endl;
        cin >> n;
        cout << "Enter a value for the array" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }
    void insertBeginning()
    {
        int value;
        cout << "Enter the value to insert at the beginning" << endl;
        cin >> value;
        n = n + 1;
        for (int i = n - 1; i >= 1; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = value;
    }
    void insertEnd()
    {
        int value;
        cout << "Enter the value to insert at the end" << endl;
        cin >> value;
        n = n + 1;
        a[n - 1] = value;
    }
    void insertMiddle()
    {
        int value;
        cout << "Enter the value to insert at middle" << endl;
        cin >> value;
        int position;
        cout << "Enter the position to insert at middle" << endl;
        cin>>position;
        n = n + 1;
        for (int i = n - 1; i >= position; i--)
        {
            a[i] = a[i - 1];
        }
        a[position - 1] = value;
    }
    void deleteBeginning()
    {
        int value = a[0];
        cout << value << "will be deleted" << endl;
        for (int i = 1; i < n; i++)
        {
            a[i - 1] = a[i];
        }
        n = n - 1;
    }
    void deleteEnd()
    {
        int value = a[n - 1];
        cout << value << "will be deleted" << endl;
        n = n - 1;
    }
    void deleteMiddle()
    {
        int position;
        cout << "Enter the position of the vale to be deleted" << endl;
        cin >> position;

        int value;
        value = a[position - 1];
        cout << value << "will be deleted" << endl;

        for (int i = position; i <= n - 1; i++)
        {
            a[i - 1] = a[i];
        }
        n = n - 1;
    }
    void displayArray()
    {
        cout << "Here is your current array" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout<<endl;
    }
};

int main()
{
    array ob;
    ob.input();
    while (1)
    {
        cout << "----------MENU----------" << endl;
        cout << "Enter 1 to insert value at the beginning" << endl;
        cout << "Enter 2 to insert value at the end" << endl;
        cout << "Enter 3 to insert value at the middle" << endl;
        cout << "Enter 4 to delete value from the beginning" << endl;
        cout << "Enter 5 to delete value from the end" << endl;
        cout << "Enter 6 to delete value from the middle" << endl;
        cout << "Enter 7 to display the array" << endl;
        cout << "Enter 8 to exit" << endl;

        int choice;
        cout << "Enter your choice" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Array before insertion" << endl;
            ob.displayArray();
            cout << "Array after insertion at the beginning" << endl;
            ob.insertBeginning();
            ob.displayArray();
            break;
        case 2:
            cout << "Array before insertion" << endl;
            ob.displayArray();
            cout << "Array after insertion at the end" << endl;
            ob.insertEnd();
            ob.displayArray();
            break;
        case 3:
            cout << "Array before insertion" << endl;
            ob.displayArray();
            cout << "Array after insertion at the middle" << endl;
            ob.insertMiddle();
            ob.displayArray();
            break;
        case 4:
            cout << "Array before deletion" << endl;
            ob.displayArray();
            cout << "Array after deletion from the beginning" << endl;
            ob.deleteBeginning();
            ob.displayArray();
            break;
        case 5:
            cout << "Array before deletion" << endl;
            ob.displayArray();
            cout << "Array after deletion from the end" << endl;
            ob.deleteEnd();
            ob.displayArray();
            break;
        case 6:
            cout << "Array before deletion" << endl;
            ob.displayArray();
            cout << "Array after deletion from the middle" << endl;
            ob.deleteMiddle();
            ob.displayArray();
            break;
        case 7:
            ob.displayArray();
            break;
        case 8:
            cout << "End of the program" << endl;
            break;
        default:
            cout << "Wrong choice" << endl;
        }
        if (choice == 8)
            break;
    }
}