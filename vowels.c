#include <stdio.h>
int main()
{
char ch;
scanf("%s",&ch);
if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='z'))
{
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'|| ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    {
        printf("Vowel");
    }
else
{
    printf("Consonant");}}
else
{
    printf("Invalid");
}
}
