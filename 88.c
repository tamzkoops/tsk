#include<stdio.h>
#include<string.h>
void main()
{
   int x,y,i,gcd;
   printf("Enter the numbers:");
   scanf("%d%d",&x,&y);
   for(i=1;i<=x&&i<=y;i++)
   {
       if(x%i==0&&y%i==0)
       {
           gcd=i;
       }
   }
   printf("LCM is :%d",x*y/gcd);
}
