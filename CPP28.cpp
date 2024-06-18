#include<iostream>
using namespace std;

#define max 10

int a[11] = {7,8,9,4,5,6,1,2,3,0};
int b[10];
void merging(int l,int mid,int h)
{
	int l1, l2, i;
	for(l1=l,l2=mid+1,i=l;l1<=mid,l2<=h;i++)
	{
		if(a[l1]<a[l2])
		{
			b[i]=a[l1++];
		}
		else
		{
			b[i]=a[l2++];
		}
	}
	while(l1<=mid)
	{
		b[i++]=a[l1++];
	}
	while(l2<=h)
	{
		b[i++]=a[l2++];
	}
	for(i=l;i<=h;i++)
	{
		a[i]=b[i];
	}
}

void sort(int l,int h)
{
	int mid;
	if(l<h)
	{
		mid = (l+h)/2;
		sort(l,mid);
		sort(mid+1,h);
		merging(l,mid,h);
	}
	else
	{
		return;
	}
}

int main()
{
	int i;
	cout<<"Before sorting";
	for(i=0;i<max;i++)
	{
		cout<<a[i]<<" ";
	}
	sort(0,max);
	cout<<"After sorting";
	for(i=0;i<max;i++)
	{
		cout<<a[i]<<" ";
	}
}
