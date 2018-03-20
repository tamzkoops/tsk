#include <stdio.h>
int main(void) 
{
int a[10],n,i,sum=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("%d",sum);
return 0;
}
