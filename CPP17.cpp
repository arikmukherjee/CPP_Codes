#include <iostream>
using namespace std;
class Sorting
{
    int a[20],len,i,j;
    public:
    Sorting()
    {
        len=5;
    }
    void inputLength()
    {
        cout<<"Enter the length of the array"<<endl;
        cin>>len;
    }
    void inputArray()
    {
        cout<<"Enter elements:"<<endl;
        for(i=0;i<len;i++)
        {
            cin>>a[i];
        }
    }
    void display()
    {
        for (i = 0; i < len; i++) {
            cout<<a[i]<<" "<<endl;
        }
    }
    void bubbleSort()
    {
        for (i = 0; i < len-1; i++) 
        {
            for (j = 0; j < len-i-1; j++) 
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
    void selectionSort()
    {
        int min_idx,temp;
	    for (i = 0; i < len - 1; i++) 
	    {
		  min_idx = i;
		  for (j = i + 1; j < len; j++) 
		  {
			if (a[j] < a[min_idx])
				min_idx = j;
		  }
		  if (min_idx != i)
		  {
			    temp = a[min_idx];
			    a[min_idx]=a[i];
			    a[i]=temp;
		  }	    
	    }
    }
    void insertionSort()
    {  
      int temp;  
        for (i = 1; i < len; i++) 
        {  
          temp = a[i];  
          j = i - 1;  
  
          while(j>=0 && temp <= a[j]) 
          {     
            a[j+1] = a[j];     
            j = j-1;    
          }    
         a[j+1] = temp;    
        }  
    }  
};
int main()
{
    Sorting ob;
    ob.inputLength();
    ob.inputArray();

        cout<<"-----Menu-----"<<endl;
        cout<<"Enter 1 for Bubble Sort."<<endl;
        cout<<"Enter 2 for Selection Sort."<<endl;
        cout<<"Enter 3 for Insertion Sort."<<endl;
        cout<<"Enter 4 for Exit."<<endl;
        
        int choice;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        
        if(choice==1)
        {
            cout<<"Array elements before sorting---"<<endl;
            ob.display();
            cout<<"Array elements after sorting---"<<endl;
            ob.bubbleSort();
            ob.display();
        }
        else if(choice==2)
        {
            cout<<"Array elements before sorting---"<<endl;
            ob.display();
            cout<<"Array elements after sorting---"<<endl;
            ob.selectionSort();
            ob.display();
        }
        else if(choice==3)
        {
            cout<<"Array elements before sorting---"<<endl;
            ob.display();
            cout<<"Array elements after sorting---"<<endl;
            ob.bubbleSort();
            ob.display();
        }
        else
        {
            cout<<"You have entered wrong option"<<endl;
        }

    return 0;
}

