#include<stdio.h>
int main()
{ 
    char a;
    scanf("%c",&a);
    if(a>='a' && a<='z')
    {
        //choto hater(a=97 & z=122) differct is 32 
        int ans= a-32;   
        printf("%c",ans);
    }
    else{
        int ans= a+32;
        printf("%c",ans);
    }
    return 0;
}