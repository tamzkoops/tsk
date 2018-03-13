#include <stdio.h>

int main(void) 
{
int l,b,h,tsa,tv;
printf("Enter l,b,h:");
scanf("%d %d %d",&l,&b,&h);
tsa=2*((l*b)+(b*h)+(h*l));
tv=l*b*h;
printf("Total surface area:%d\n",tsa);
printf("Total volume:%d",tv);
return 0;
}
