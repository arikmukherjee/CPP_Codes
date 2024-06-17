#include <iostream>
int fun2(int y)
{
    int i;
    for ( i=0;(i*i)<y;i++);
    return i;
}
int main()
{
    std::cout<<fun2(25);

    return 0;
}
//0 1 4 9 16 
