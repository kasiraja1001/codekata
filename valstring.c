#include <stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(isdigit(ch))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
 return 0;   
}
