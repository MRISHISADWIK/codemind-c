#include<bits/stdc++.h>
using namespace std;
int main()
{   
    double a,b,sum=0;
    cin >> a >> b;
    for(int i=a;i<=b;i++)
    {
        sum+=sqrt(i);
    }
    printf("%.2f",sum);
}