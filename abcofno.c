#include<stdio.h>
void main()
{
    int a,m,n,sum=0;
    scanf("%d%d%d",&a,&m,&n);
    while(n>0)
    {
        sum+=a;
        a=a+m;
        n--;
    }
    printf("%d",sum);
}
