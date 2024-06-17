#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};

class linked_list
{
    struct node *head;
    public:
    linked_list()
    {
        head = NULL;
    }
    void insert_beg(int value)
    {
        struct node *temp;
        temp = new node;
        temp->data = value;
        temp->link = head;
        head = temp;
    }
    void insert_end(int value)
    {
        struct node *temp, *temp1;
        temp1 = new node();
        temp1->data = value;
        temp1->link = NULL;
        if (head == NULL) {
            head = temp1;
        } else {
            temp = head;
            while (temp->link != NULL)
            {
                temp = temp->link;
            }
            temp->link = temp1;
        }
    }
    void delete_beg()
    {
        if (head == NULL) {
            cout << "List is empty." << endl;
            return;
        }
        struct node *temp = head;
        head = head->link;
        delete temp;
    }
    void delete_end()
    {
        if (head == NULL) {
            cout << "List is empty." << endl;
            return;
        }
        if (head->link == NULL) {
            delete head;
            head = NULL;
            return;
        }
        struct node *temp = head, *temp1;
        while (temp->link->link != NULL)
        {
            temp = temp->link;
        }
        temp1 = temp->link;
        temp->link = NULL;
        delete temp1;
    }
    void display()
    {
        struct node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->link;
        }
        cout << endl;
    }
};

int main()
{
    linked_list ob;
    int choice, value;

    while (1)
    {
        cout << "enter 1 to insert at the beginning." << endl;
        cout << "enter 2 to insert at the end." << endl;
        cout << "enter 3 to display the list." << endl;
        cout << "enter 4 to delete from the beginning." << endl;
        cout << "enter 5 to delete from the end." << endl;
        cout << "enter 6 to exit." << endl;
        cin >> choice;
        switch (choice)
        {
            case 1:
                cout << "Enter the value to insert at beginning" << endl;
                cin >> value;
                ob.insert_beg(value);
                break;
            case 2:
                cout << "Enter the value to insert at the end" << endl;
                cin >> value;
                ob.insert_end(value);
                break;
            case 3:
                ob.display();
                break;
            case 4:
                ob.delete_beg();
                break;
            case 5:
                ob.delete_end();
                break;
            case 6:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Wrong choice." << endl;
        }
    }
}

