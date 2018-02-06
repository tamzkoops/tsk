#include<stdio.h>
void main()
{

int a,b;
printf ("Enter a:");
scanf("%d",&a);
printf ("Enter b:");
scanf("%d",&b);
a=a^b;
b=b^a;
a=b^a;
printf("%d,%d",a,b);
}
