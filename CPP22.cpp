#include <iostream>
using namespace std;

int main()
{
    int a[10],b[10],c[20];
    int i,j,k,l1,l2,l3;
    
    cout<<"enter the length of the first array"<<endl;
    cin>>l1;
    cout<<"enter the elements of the first array"<<endl;
    for (i = 0; i < l1; i++) {
        cin>>a[i];
    }
    
    cout<<"enter the length of the second array"<<endl;
    cin>>l2;
    cout<<"enter the elements of the second array"<<endl;
    for (j = 0; j < l2; j++) {
        cin>>b[j];
    }
    l3=l1+l2;
    i=0,j=0,k=0;
    while(i<l1 && j<l2)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            k++;
            i++;
        }
        else if(a[i]>b[j])
        {
            c[k]=b[j];
            k++;
            j++;
        }
        else
        {
            c[k]=b[j];
            k++;
            j++;
            i++;
        }
    }
    while(i<l1)
    {
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<l2)
    {
        c[k]=b[j];
        k++;
        j++;
    }
    
    for (k = 0; k < l3; k++) {
        cout<<c[k]<<" ";
    }
    return 0;
}

