#include <stdio.h>
int main()
{
    int num;
    printf("Enter the no:");
    scanf("%d",&num);
    while(num%2==0)
    {
        num=num/2;
    }
    printf("%d",num);
    return 0;
}
