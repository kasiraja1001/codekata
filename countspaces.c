#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[50];
int i=0,c=0;
gets(a);
 while(a[i]!='\0')
 {
     if(a[i]==' ')
        c++;
        i++;
    }
    printf("%d",c);
}
