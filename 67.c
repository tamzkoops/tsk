
#include <stdio.h>

int main(void) 
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	while(num%10!=0)
	{
		num=num+1;
	}
	printf("\n%d",num);
	return 0;
}
