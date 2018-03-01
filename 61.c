#include<stdio.h>
#include<string.h>
int main()
{
int a,i;
char b[10];
printf("Enter string:");
scanf("%s",&b);
printf("Enter num:");
scanf("%d",&a);
for(i=0;i<a;i++)
{
        printf("%c",b[i]);
}
}
