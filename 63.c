#include<stdio.h>
int main()
{
char s[50];
int count=0,i;
scanf("%s",s);
for(i=0;s[i]!=0;i++)
{
if(s[i]==' ')
{
count++;
}
}
printf("\n N of words=%d",count+1);
return 0;
}
