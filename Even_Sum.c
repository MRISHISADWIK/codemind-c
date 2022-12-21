#include<stdio.h>
int main()
{
    int a,i,sum=0;
    scanf("%d",&a);
    int king[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&king[i]);
        if(king[i]%2==0)
      {
          sum=sum+king[i];
      }  
    } 
      printf("%d",sum);
}