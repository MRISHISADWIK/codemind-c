#include<stdio.h>
int main()
{
    int n,i,c=0,d=0;
    scanf("%d",&n);
    int rishi[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&rishi[i]);
        if(rishi[i]%2==0)
        {
            d++;
           if(i%2==0)
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