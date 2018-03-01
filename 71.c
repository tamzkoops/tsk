#include<stdio.h>
#include<string.h>
void main()
{
    char s[20],s1[20];
    int a;
    printf("Enter the string");
    scanf("%s",s);
    strcpy(s1,s);
    strrev(s);
    a=strcmp(s,s1);
    if(a==0)
        printf("Yes");
    else
        printf("No");
}
