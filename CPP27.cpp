#include<iostream>
using namespace std;

int partition(int a[],int lb,int ub)
{
	int pivot = a[lb];
	int start = lb;
	int end = ub;
	while(start<end)
	{
		while(a[start]<=pivot)
		{
			start++;
		}
		while(a[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			swap(a[start],a[end]);
		}
	}
	swap(a[lb],a[end]);
	return end;
}

int quicksort(int a[],int lb,int ub)
{
	if(lb<ub)
	{
		int loc = partition(a,lb,ub);
		quicksort(a,lb,loc-1);
		quicksort(a,loc+1,ub);
	}
}

int main()
{
	int i;
	int a[] = {29,10,14,37,13};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<"Before sorting";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	quicksort(a,0,n-1);
	cout<<"After sorting";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
