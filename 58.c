
#include <stdio.h>

void main()
{
    int a,b;
    printf("Enter a,b:");
    scanf("%d%d",&a,&b);
    a=a^b;
    b=b^a;
    a=b^a;
    printf("After swapping:%d,%d",a,b);
}


