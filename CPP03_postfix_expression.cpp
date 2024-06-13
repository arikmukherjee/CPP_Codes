#include<iostream>
#include<string.h>
using namespace std;
class p
{
int s[30],top;
char pos[30];
public:
	p()
	{
	top=-1;
	}
	void push(int x)
	{
		s[++top]=x;
	
	}
	int pop()
	{
		return s[top--];	
	}
	void input_array()
	{
		cout<<"Enter the post fix expression ";
		cin>>pos;	
	}
	void evalution()
	{
	int z;
		for(int i=0;i<strlen(pos);i++)
		{
			if(pos[i]>='0'&& pos[i]<='9')
				push(pos[i]-48);
			else
			{
				int x=pop();
				int y=pop();
				if(pos[i]=='+')
					z=y+x;
				if(pos[i]=='-')
					z=y-x;
				if(pos[i]=='*')
					z=y*x;
				if(pos[i]=='/')
					z=y/x;
				push(z);
			}

		}
		cout<<s[0];
	}
	
	
	
};
int main()
{
p ob;
ob.input_array();
ob.evalution();
return 0;
}
