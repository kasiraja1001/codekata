#include <stdio.h>

int main()
{
    int n,k,sum=1;
    scanf("%d%d",&n,&k);
    while(k!=0)
    {
        
        sum=sum*n;
        k--;
    }
    printf("%d",sum);

    return 0;
}
