#include <stdio.h>
int main() 
{
	float p,r,result;
	int ta,n;
	scanf("%f %d %f",&p,&n,&r);
	result=((p*n*r)/100);
	ta=floor(result);
	printf("\n%d",ta);
	return 0;
}
