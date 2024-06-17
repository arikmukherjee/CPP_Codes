 #include<iostream>

using namespace std;



class array

{

	int a[30], n;

	public:

		void input()

		{

			cout<<"Enter the length: ";

			cin>>n;

			cout<<"Enter a value for the array "<<endl;

			for(int i=0; i<n; i++)	

				cin>>a[i];

		}

		void insert_begin()

		{

			int value;

			cout<<"Enter a value for insertion at the front "<<endl;

			cin>>value;

			n=n+1;

			for(int i=n-1; i>=1; i--)

			{

				a[i]=a[i-1];

			}

			a[0]=value;

		}

		void insert_end()

		{

			int value;

			cout<<"Enter a value for insertion at the end "<<endl;

			cin>>value;

			n=n+1;

			a[n-1]=value;

		}

		void insert_position()

		{

			int pos;

			cout<<"Enter the position "<<endl;

			cin>>pos;

			int value;

			cout<<"Enter the value "<<endl;

			cin>>value;

			for(int i=n-1; i>=pos; i--)

			{

				a[i]=a[i-1];

			}

			a[pos-1]=value;

		}

		void display()

		{

			cout<<"The value of array "<<endl;

			for(int i=0; i<n; i++)

			cout<<a[i]<<" ";

			cout<<endl;

		}

		void delete_begin()

		{

			int value;

			value=a[0];

			cout<<"The deleted value is "<<value<<endl;

			for(int i=1; i<=n-1; i++)

			{

				a[i-1]=a[i];

			}

			n=n-1;

		}

		void delete_end()

		{

			int value;

			value=a[n-1];

			cout<<"The deleted value is "<<value<<endl;

			n=n-1;

		}

		void delete_position()

		{

			int value, pos;

			cout<<"Enter position "<<endl;

			cin>>pos;

			value=a[pos-1];

			cout<<"The deleted value is "<<value<<endl;

			for(int i=pos; i<=n-1; i++)

			{

				a[i-1]=a[i];

			}

			n=n-1;

		}

	

};



int main()

{

	array ob;

	ob.input();

	while(1)

	{

		cout<<"Enter 1 for displaying array "<<endl;

		cout<<"Enter 2 for inserting element at the front "<<endl;

		cout<<"Enter 3 for inserting element at the end "<<endl;

		cout<<"Enter 4 for inserting element at the given position "<<endl;

		cout<<"Enter 5 for deleting element from the front "<<endl;

		cout<<"Enter 6 for deleting element from the end "<<endl;

		cout<<"Enter 7 for deleting element from a given position "<<endl;

		cout<<"Enter 8 for exit "<<endl;

		

		int choice;

		cin>>choice;

		switch(choice)

		{

			case 1: 	

				ob.display();

				break;

			

			case 2:

				cout<<"\nValue before insertion\n";

				ob.display();

				ob.insert_begin();

				cout<<"\nValue after insertion\n";

				ob.display();

				break;

				

			case 3:

				cout<<"\nValue before insertion\n";

				ob.display();

				ob.insert_end();

				cout<<"\nValue after insertion\n";

				ob.display();

				break;

			

			case 4:

				cout<<"\nValue before insertion\n";

				ob.display();

				ob.insert_position();

				cout<<"\nValue after insertion\n";

				ob.display();

				break;

				

			case 5:

				cout<<"\nValue before deletion\n";

				ob.display();

				ob.delete_begin();

				cout<<"\nValue after deletion\n";

				ob.display();

				break;

				

			case 6:

				cout<<"\nValue before deletion\n";

				ob.display();

				ob.delete_end();

				cout<<"\nValue after deletion\n";

				ob.display();

				break;

				

			case 7:

				cout<<"\nValue before deletion\n";

				ob.display();

				ob.delete_position();

				cout<<"\nValue after deletion\n";

				ob.display();

				break;

				

			case 8:

				cout<<"Exit from program";

				break;

				

			default:

				cout<<"Enter a valid choice\n";

		}

		if(choice==8)

			break;

	}

	return 0;

}