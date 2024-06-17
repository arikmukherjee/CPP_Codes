#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

struct Node* head;//global variable, can be accessed anywhere

void Insert(int x);

void Print();

int main()
{
    
  head = NULL;//empty list   
  
  int n;
  cout<<"How many elements do you want to add";
  cin>>n;
  
  for(int i=0;i<n;i++)
  {
      int x;//for data
      cout<<"Enter number";
      cin>>x;
      Insert(x);
      Print();
  }
  
}

void Insert(int x)
{
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;
    if(head!=NULL)
    {
        temp->next = head;
    }
    head = temp;
}

void Print()
{
    Node* temp = head;
    cout<<"List is : ";
    while(temp != NULL)
    {
        cout<<temp->data;
        temp = temp->next;
    }
    cout<<"\n";
}
