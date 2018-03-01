#include<stdio.h>
void main() {
    int fib1=0,fib2=1,fib,n,i;
    scanf("%d",&n);
    printf("%d \t %d \t",fib1,fib2);
    for(i=2;i<n;i++)
{     fib=fib1+fib2;
       fib1=fib2;
       fib2=fib;
       printf("%d\t",fib);
}
    
}
