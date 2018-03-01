#include<stdio.h>
int main()
{
int N,x;
printf("enter the number");
scanf("%d",&N);
x=--N;
if(x<=N)
{
if(N%2==0)
{
printf("%d",N);
}
}
}
