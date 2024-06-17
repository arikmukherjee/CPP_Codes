#include <iostream>
using namespace std;
struct node {
  float coeff;
  int expo;
  struct node* next;
};
struct node* insert(struct node* head, float co, int ex)
{
  struct node* temp;
  struct node* newP=new node();
  newP->coeff=co;
  newP->next=NULL;
  
  //if there is no node in the list OR given exponent is greater than the first node exponent
  if(head==NULL || ex>head->expo)
  {
    newP->next=head;
    head=newP;
  }
  else
  {
    temp=head;
    while(temp->next!=NULL && temp->next->expo>=ex)
      temp=temp->next;
    newP->next=temp->next;
    temp->next=newP;
  }
  return head;
}
struct node* create(struct node* head)
{
  int n, i;
  float coeff;
  int expo;
  cout<<"Enter the number of terms: ";
  cin>>n;
  for(i=0; i<n; i++)
  {
    cout<<"Enter the coefficient for term "<<i+1<<": ";
    cin>>coeff;
    cout<<"Enter the exponent for term "<<i+1<<": ";
    cin>>expo;
    head=insert(head, coeff, expo);
  }
  return head;
}
void print(struct node* head)
{
  if(head==NULL)
    cout<<"No Polynomial.";
  else {
      struct node* temp=head;
      while(temp!=NULL)
      {
        cout<<temp->coeff<<"(x^)"<<temp->expo;
        temp=temp->next;
        if(temp!=NULL)
          cout<<" + ";
        else
          cout<<endl;
      }
  }
}
void polyadd(struct node* head1, struct node* head2)
{
  struct node* ptr1=head1;
  struct node* ptr2=head2;
  struct node* head3=NULL;
  while(ptr1!=NULL && ptr2!=NULL)
  {
    if(ptr1->expo==ptr2->expo)
    {
      head3=insert(head3, ptr1->coeff+ptr2->coeff, ptr1->expo);
      ptr1=ptr1->next;
      ptr2=ptr2->next;
    }
    else if(ptr1->expo>ptr2->expo)
    {
      head3=insert(head3, ptr1->coeff, ptr1->expo);
      ptr1=ptr1->next;
    }
    else
    {
      head3=insert(head3, ptr2->coeff, ptr2->expo);
      ptr2=ptr2->next;
    }
  }
  while(ptr1!=NULL)
  {
    head3=insert(head3, ptr1->coeff, ptr1->expo);
    ptr1=ptr1->next;
  }
  while(ptr2!=NULL)
  {
    head3=insert(head3, ptr2->coeff, ptr2->expo);
    ptr2=ptr2->next;
  }
  cout<<"Added polynomial is: ";
  cout<<head3;
}

int main()
{
  struct node* head1=NULL;
  struct node* head2=NULL;
  cout<<"Enter the first polynomial"<<endl;
  head1=create(head1);
  cout<<"Enter the second polynomial"<<endl;
  head2=create(head2);
  polyadd(head1, head2);
  return 0;
}