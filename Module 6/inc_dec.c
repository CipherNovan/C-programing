#include<stdio.h>
int main()
{ 
    int i=10;
    int x=++i;
    printf("x-%d i-%d",x,i);
    return 0;
    //post increment i++,pre increment x=++i,
}