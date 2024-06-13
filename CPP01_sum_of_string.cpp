#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char s[10];
int p;
cout<<"Enter a string :";
cin>>s;
for(int i=0;i<strlen(s);i++)
{
cout<<s[i]<<" ";
}
if(s[1]== '+') 
p=(s[0]-48)+(s[2]-48);
if(s[1]== '-') 
p=(s[0]-48)-(s[2]-48);
if(s[1]== '*') 
p=(s[0]-48)*(s[2]-48);
if(s[1]== '/') 
p=(s[0]-48)/(s[2]-48);
cout<<"\nthe sum is "<<p;
}
