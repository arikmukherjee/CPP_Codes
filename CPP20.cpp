// Binary search
#include<iostream>
using namespace std;

class BinarySearch
{
    int a[30],low , high,length;
    public:
    BinarySearch()
    {
        low=0;
        high=length-1;
    }
    void inputArray()
    {
        cout<<"Enter array elements:"<<endl;
        for (int i = 0; i < length; i++)
        {
            cin>>a[i];
        }
        
    }
    void inputLength()
    {
        cout<<"Enter length of the array:"<<endl;
        cin>>length;
    }
    int search(int value)
    {
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(value==a[mid])
            {
                return mid;
            }
            else if(value<a[mid])
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return 0;
    }
    void display()
    {
        cout<<"Here is the array"<<endl;
        for (int i = 0; i < length; i++)
        {
            cout<<a[i]<<" ";
        }
        
    }
};

int main()
{
    BinarySearch ob;
    ob.inputLength();
    ob.inputArray();
    ob.display();
    int target;
    cout<<"Enter the value to search"<<endl;
    cin>>target;
    cout<<"The value is at position"<<ob.search(target);
}