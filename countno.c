#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[500];
    int i,n,s=0;
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
        {
    if(isdigit(a[i]))
         {
            s++;
        }
    }
    printf("%d",s);
}
