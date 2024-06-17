#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter total number of vertices"<<endl;
    cin>>n;
    //matrix
    int a[n][n];
    int i,j,k;
    cout<<"Input the value of adjacency matrix"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the value of "<<i+1<<"row";
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    
    //display cost matrix
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    // algo
    for(k=0;k<n;k++)
    {
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
                a[i][j]=a[i][j] || (a[i][k] && a[k][j]);
        }
    }
    }
    //diaplay 
    cout<<"output matrix"<<endl;
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}