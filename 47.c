#include<stdio.h>
void main()
{
int a[]={7,3,2},n,i;
if(a[0]>a[1] && a[0]>a[2])
    printf("%d %d",a[0],a[2]);
else if(a[1]>a[0] && a[1]>a[2])
    printf("%d",a[1]);
else
    printf("%d",a[2]);
}
