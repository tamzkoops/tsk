#include <stdio.h>

int main(void) {
	int a,b,n;
	scanf("%d%d",&a,&b);
	printf("Enter num:");
        scanf("%d",&n);	
	if(a>n || n<b)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}

	return 0;
}
