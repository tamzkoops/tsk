#include <stdio.h>

int main(void) 
{
int n,b,ans,c;
scanf("%d %d %d",&n,&b,&c);
ans=(n*b)%c;
printf("%d",ans);
}
