#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[50];
int i,n,m=1;
gets(a);
 n=strlen(a);
for(i=0;i<n;i++)
{
    if(a[i]==' ')
    {
        m++;
    }
    }
    printf("%d ",m);
}
