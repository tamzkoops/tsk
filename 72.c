#include <stdio.h>

int main(void) {
	char a[50];
	scanf("%s",&a);
	int count=0;
{
	for(int i=0;i<50;i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		{
			count++;
		}
	}
	if(count>0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}


	return 0;
}
