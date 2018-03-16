#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int n,i,len;
printf("\n Enter the string");
scanf("%s",str);
printf("\n N=");
scanf("%d",&n);
len=strlen(str);
for(i=len-n;str[i]!='\0';i++)
{
printf("%c",str[i]);
}
  return 0;
}
