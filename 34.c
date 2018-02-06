#include<stdio.h>
#include<string.h>
void main()
{
int a,count=0,i;
char s[600];
gets(s);
for(i=0;s[i]!=NULL;i++)
{
if(s[i]=='.')
count++;
}
printf("%d",count);
}
