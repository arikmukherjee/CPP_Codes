#include<iostream> 
using namespace std;

class cl
{
    int a[20], len,i,j;

  public:
    cl()
    {
        len = 5;
    }
    void Inputlength()
    {
        cout << "Enter length" << endl;
        cin >> len;
    }
    void Inputarray()
    {
        for (i = 0; i < len; i++)
            cin >> a[i];
    }
    void Display()
    {
        for (i = 0; i < len; i++)
            cout << a[i] << " ";
    }
    void Bubblesort()
    {
        for (i = 0; i < len - 2; i++)
        {
            for (j = 0; j < len - i - 2; j++)
            {
                if (a[j] > a[j + 1])
                {
                    int t = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = t;
                }
            }
        }
    }
};

int main()
{
    cl ob;
    ob.Inputlength();
    ob.Inputarray();
    cout<<"Array elements before sorting "<<endl;
    ob.Display();
    ob.Bubblesort();
    cout<<"Array elements after sorting "<<endl;
    ob.Display();
    return 0;
}