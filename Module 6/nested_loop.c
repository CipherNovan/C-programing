#include<stdio.h>
int main()
{ 
    for(int i=1;i<=3;i++)
    {
        //kaj nested loop
        for (int j=1;j<=5;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}