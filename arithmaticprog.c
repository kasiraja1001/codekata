#include <stdio.h>

int main()
{
    int a,d,n,sum;
    scanf("%d%d%d",&n,&a,&d);
    sum=(n*(2*a+(n-1)*d))/2;
    printf("%d ",sum);
}
