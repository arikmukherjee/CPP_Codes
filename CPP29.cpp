#include<iostream>
using namespace std;
class BubbleSort
{
	int a[20],length,i,j;
	public:
		BubbleSort()
		{
			length=5;
		}
		void input_length()
		{
			cout<<"Enter length"<<endl;
			cin>>length;
		}
		void input_array()
		{
			cout<<"Enter array elements"<<endl;
		    for(i=0;i<length;i++)
			{
				cin>>a[i];
			}	
		}
		void display_array()
		{
		    for(i=0;i<length;i++)
			{
				cout<<a[i]<<" "<<endl;
			}	
		}
		void bubbleSort()
		{
			for(i=0;i<length;i++)
			{
				for(j=0;j<length-i-1;j++)
			    {
				     if(a[j]>a[j+1])
				     {
				     	int temp=a[j];
				     	a[j]=a[j+1];
				     	a[j+1]=temp;
					 }
			    }
			}
		}
};

int main()
{
	BubbleSort ob;
	ob.input_length();
	ob.input_array();
	cout<<"Array elements before sorting"<<endl;
	ob.display_array();
	ob.bubbleSort();
	cout<<"Array elements after sorting"<<endl;
	ob.display_array();
	return 0;
}
