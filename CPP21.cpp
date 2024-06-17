#include <iostream>
using namespace std;

int main()
{
    int a[10],b[10],c[20];
    int i,j,k,l1,l2,l3;
    
    // for 1st array
    cout<<"Enter the length of first sorted array"<<endl;
    cin>>l1;
    cout<<"Enter elements of first array"<<endl;
    for (i = 0; i < l1; i++) 
    {
        cin>>a[i];    
    }
    
    //for 2nd array
    cout<<"Enter the length of second sorted array"<<endl;
    cin>>l2;
    cout<<"Enter elements of first array"<<endl;
    for (j = 0; j < l2; j++) 
    {
        cin>>b[j];    
    }
    
    //merging 1st+2nd array and creating 3rd sorted array
    l3=l1+l2;
    i=0,j=0,k=0;
    while(1<l1 && j<l2)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            k++;
            i++;
        }
        else
        {
            c[k]=b[j];
            k++;
            j++;
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
        c[k]=a[j];
        k++;
        j++;
    }
    
    cout<<"The merged array is:"<<endl;
    for (k = 0; k < l3; k++) 
    {
        cout<<c[k]<<" ";
    }

    return 0;
}
