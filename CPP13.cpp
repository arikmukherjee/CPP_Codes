#include<iostream>
using namespace std;

class Node
{
  public:
  int data;
  Node *link;
};

class linkedlist
{
  Node *head;
  public:
  linkedlist();
  void myinsertbeg();
  void myinsertend();
  void myinsertpos(int p);
  void myshow();
  void mydeletebeg();
  void mydeleteend();
};

linkedlist::linkedlist()
{
  head=NULL;
}

//add at the beginning

void linkedlist::myinsertbeg()
{
  Node *temp;
  int n;
  temp=new Node();
  cout<<"Enter the value to insert: ";
  cin>>n;
  
  temp->data=n;
  
  if(head==NULL)
  {
    temp->link=NULL;
    head=temp;
  }
  else
  {
    temp->link=head;
    head=temp;
  }
}

//add at the end

void linkedlist::myinsertend()
{
  Node *temp,*h;
  int n;
  temp=new Node();
  cout<<"Enter the value to insert: ";
  cin>>n;
  
  temp->data=n;
  temp->link=NULL;
  
  if(head==NULL)
  {
    head=temp;
  }
  else
  {
    h=head;
    while((h->link)!=NULL)
    {
      h=h->link;
    }
    h->link=temp;
  }
}

//add at the particular position

void linkedlist::myinsertpos(int p)
{
  Node *temp,*h;
  int n,c=1;
  temp=new Node();
  cout<<"Enter the value to insert: ";
  cin>>n;
  
  temp->data=n;
  temp->link=NULL;
  
  h=head;
  while(c<(p-1) && h!=NULL)
  {
    h=h->link;
    c++;
  }
  if(h!=NULL)
  {
    temp->link=h->link;
    h->link=temp;
  }
  else
  {
    cout << "Invalid position" << endl;
  }
}

//delete node at the beginning

void linkedlist::mydeletebeg()
{
  if(head!=NULL)
  {
    Node* temp = head;
    head = head->link;
    delete temp;
  }
  else
  {
    cout << "List is empty. Cannot delete from the beginning." << endl;
  }
}

//delete node at the end

void linkedlist::mydeleteend()
{
  if(head!=NULL)
  {
    if(head->link == NULL)
    {
      delete head;
      head = NULL;
    }
    else
    {
      Node *h = head;
      while(((h->link)->link)!=NULL)
      {
        h=h->link;
      }
      delete h->link;
      h->link=NULL;
    }
  }
  else
  {
    cout << "List is empty. Cannot delete from the end." << endl;
  }
}

void linkedlist::myshow()
{
  Node *h;
  h=head;
  while(h!=NULL)
  {
    cout<<h->data<<" ";
    h=h->link;
  }
  cout << endl;
}

int main()
{
  linkedlist ob;
  int a=0,b,pos;
  while(a==0)
  {
    cout<<"\n---Menu---\n1.Add at the beginning\n2.Add at the end\n3.Add at any position \n4.Show\n5.Delete from the beginning\n6.Delete from the end\n7.Exit\n";
    cin>>b;
    switch(b)
    {
      case 1: 
         ob.myinsertbeg();
         ob.myshow();
         break;
      case 2: 
         ob.myinsertend();
         ob.myshow();
         break; 
      case 3: 
         cout<<"Enter the position: ";
         cin>>pos;
         ob.myinsertpos(pos);
         ob.myshow();
         break;
      case 4: 
         ob.myshow();
         break;
      case 5: 
         ob.mydeletebeg();
         ob.myshow();
         break;
      case 6: 
         ob.mydeleteend();
         ob.myshow();
         break;
      case 7: 
         a=1;
         break;
     }
   }
}
