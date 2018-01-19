#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c ;
printf("Enter a,b,c");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
printf("A is big");
}
if(b>a && b>c)
{
printf("B is big");
}
if(c>a && c>b)
{
printf("C is big");
}
getch();
}

