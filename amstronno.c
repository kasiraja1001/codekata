#include <stdio.h>
int main()
{
    int n,sum=0,r,c,temp;
    scanf("%d",&n);
     temp=n;
    while(n>0)
    {
        r=n%10;
        c=r*r*r;
        sum=sum+c;
        n=n/10;
    }
    n=temp;
    if(n==sum)
    {
        printf("yes");
    }
    else
    {
        printf("no");
        
    }
    return 0;
}
