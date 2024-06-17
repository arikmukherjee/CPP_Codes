#include<iostream>
using namespace std;

int main()
{
	int a[10][10],row,col,count=0,i,j,k=1;
	int s[10][3];
	cout<<"total number of row";
	cout<<"total number of column";
	cin>>row;
	cin>>col;
	cout<<"enter value";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"matrix element\n";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	//count total number of nonzero elements
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(a[i][j]!=0)
			{
				count++;
			}
			
		}
	}
	cout<<count;
	s[0][0]=row;
	s[0][1]=col;
	s[0][2]=count;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(a[i][j]!=0)
			{
				s[k][0]=i;
				s[k][1]=j;
				s[k][2]=a[i][j];
				k++;
			}
		}
	}
	cout<<"\n output array \n";
	for(i=0;i<count+1;i++)
	{
		for(j=0;j<3;j++)
		{
		  cout<<s[i][j]<<" ";
		}
		cout<<"\n";
	}
}
