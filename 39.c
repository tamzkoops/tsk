#include<stdio.h>
void main()
{

int a[10],i,large;
printf ("Enter 10 num:");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
large=a[0];
for (i=0;i<10;i++)
{
if ( a[i] > large )
{
large=a[i];
}
}
printf(" The greatest num :%d",large);
}
