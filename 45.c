#include<stdio.h>
#include<string.h>
void main()
{
int n,count=1,i;
printf("Enter n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    n=n/10;
 count++;
}
printf("%d",count);
}
