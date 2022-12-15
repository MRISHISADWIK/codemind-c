#include<stdio.h>
int main()
{
    char su;
    scanf("%c",&su);
    if(su>='A' && su<='Z') 
    {
        printf("uppercase alphabet");
    }
    else if(su>='a' && su<='z')
    {
        printf("lowercase alphabet");
    }
    else
    {
        printf("not an alphabet");
    }
}