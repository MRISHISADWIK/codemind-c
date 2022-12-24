#include<stdio.h>
int main()
{
    int n,i,c=0,d=0;
    scanf("%d",&n);
    int king[n];
    for(i=0;i<=n;i++)
    {
        scanf("%d",&king[i]);
    
       if(king[i]%2==1)
       {
           d++;
           if(i%2==1)
       {
           c++;
       }
       }
    }
    if(c==d)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}