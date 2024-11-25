/*
0 3 2 999
3 0 8 1
2 8 0 1
999 1 1 0
*/
#include<iostream>
using namespace std;
int top=-1,s[10];
int status[]={0,0,0,0,0,0,0,0,0,0};
void push(int x)
 {
 	if (top==9)
 	{
 		cout<<"stack overflow";
 		return;
	 }
	 s[++top]=x;
 }
 int pop()
 {
 if (top==-1)
  {
  	 cout<<"stack underflow";
  	 return 999;
	  }	
	  return s[top--];
 }
int  main()
 {
 	int n,a[10][10],i,j,k;
 	cout<<"enter total number of vertices" << endl;
 	cin>> n;
 	cout<<"enter the value of the cost matrix";
 	for(i=0;i<n;i++)
 	 {
 	 	for (j=0;j<n;j++)
 	 	{
 	 		cout<<"Enter cost if vertex "<< i <<" and vertex " << j << " connected otherwise 999 ";
 	 		cin>> a[i][j];
		  }
	  }
	
	  cout<< "output matrix" << endl;
 	 	for(i=0;i<n;i++)
 	 {
 	 	for (j=0;j<n;j++)
 	 	{
 	 		cout<< a[i][j] <<" ";
		  }
		  cout<< endl;
	  }
	  push(0);
	  status[0]=1;
	while(1)
	{
	   	if (top==-1)
		   break;
		   int v=pop();
		   cout<< "vertex "<< (char)(v+65) << endl;
		   for(i=0;i<n;i++)
		   {
		   	if (a[v][i]==1&&status[i]==0)
		   	{
		   	push(i);
		   	status[i]=1;
		   }
		   }
		   	
	}
	  
 }