#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *link;
};
class LinkedList
{
	Node *head;
	public:
		LinkedList();
		void myInsertBeg();
		void myInsertEnd();
		void myInsertPos(int p);
		void myDeleteBeg();
		void myDeleteEnd();
		void myDeletePos(int p);
		void mySreach();
		void myCount();
		void myShow();
};
LinkedList::LinkedList()
{
	head=NULL;
}
void LinkedList::myInsertBeg()
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
void LinkedList::myInsertEnd()
{
	Node *temp,*h;
	int n;
	temp=new Node();
	cout<<"Enter the value to insert: ";
	cin>>n;
	temp->data=n;
	temp->link=NULL;
	h=head;
	while((h->link)!=NULL)
	{
		h=h->link;
	}
	h->link=temp;
}
void LinkedList::myInsertPos(int p)
{
	Node *temp,*h;
	int n,c=1;
	temp=new Node();
	cout<<"Enter the value to insert:";
	cin>>n;
	temp->data=n;
	h=head;
	while(c<(p-1))
	{
		h=h->link;
		c++;
	}
	temp->link=h->link;
	h->link=temp;
}
void LinkedList::myDeleteBeg()
{
	head=head->link;
	cout<<"First element is deleted.";
}
void LinkedList::myDeleteEnd()
{
	Node *h;
	h=head;
	while(((h->link)->link)!=NULL)
	{
		h=h->link;
	}
	h->link=NULL;
	cout<<"Last element is deleted.";
}
void LinkedList::myDeletePos(int p)
{
	Node *h;
	h=head;
	int c=1;
	while(c<(p-1))
	{
		h=h->link;
		c++;
	}
	h->link=(h->link)->link;
	cout<<"The element is deleted.";
}
void LinkedList::mySreach()
{
	Node *h;
	h=head;
	int num,c=1;
	cout<<"Enter the value which you want to search:";
	cin>>num;
	while((h->link)!=NULL)
	{
		if((h->data)==num)
		{
			cout<<"The number is found at position:"<<c;
		}
		h=h->link;
		c++;	
	}
	if((h->data)==num)
	{
		cout<<"The number is found at position:"<<c;
	}
	else
	{
		cout<<"The number is not present in the linkedlist.";
	}
}
void LinkedList::myShow()
{
	Node *h;
	h=head;
	while(h!=NULL)
	{
		cout<<h->data<<" ";
		h=h->link;
	}
}
void LinkedList::myCount()
{
	Node *h;
	h=head;
	int count=0;
	while((h->link)!=NULL)
	{
		count++;
		h=h->link;
	
	}
	cout << "Count of nodes is " <<++count;
}

int main()
{
	LinkedList ob;
	int a=0,b,pos;
	while(a==0)
	{
		cout<<"\n--menu--\n1.add at the beg\n2.add at the end\n3.add at a position\n";
		cout<<"4.delete from begining\n5.delete from end\n6.delete at a position\n";
		cout<<"7.search\n8.count\n9.show\n10.exit\n";
		cout<<"Enter your option:";
		cin>>b;
		switch(b)
		{
			case 1:
				ob.myInsertBeg();
				break;
			case 2:
				ob.myInsertEnd();
				break;
			case 3:
				cout<<"Enter the position where you want to insert:";
				cin>>pos;
				ob.myInsertPos(pos);
				cout<<"The value is inserted successfully.";
				break;
			case 4:
				ob.myDeleteBeg();
				break;
			case 5:
				ob.myDeleteEnd();
				break;
			case 6:
				cout<<"Enter the position where you want to delete:";
				cin>>pos;
				ob.myDeletePos(pos);
				break;
			case 7:
				ob.mySreach();
				break;
			case 8:
				ob.myCount();
				break;
			case 9:
				ob.myShow();
				break;	
			default:
				if(b==10)
				{
					a=1;
				    cout<<"You are exit from the porgram!";
				}
				else
				{
					cout<<"You enter wrong option!";
				}
		}
	}
}