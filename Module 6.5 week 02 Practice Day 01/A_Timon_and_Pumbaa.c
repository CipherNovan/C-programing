#include<stdio.h>
int main()
{ 
    int a,b;
    scanf("%d %d",&a,&b);
    int sub=a-b;
    if (sub<0)
    {
        sub=0;
    }
    printf("%d\n",sub);
    return 0;
}