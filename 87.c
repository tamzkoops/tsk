#include <stdio.h>
#include<math.h>
int main()
{ 
    int a,b;
    scanf("%d %d",&a,&b);
    if(b%a==0)
    printf("GCD:%d",a);
    else if(a%b==0)
    printf("GCD:%d",b);
    return 0;
}
