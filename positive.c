#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("Enter the number");
scanf("%d",&n);
if(n<0)
{
printf("Negative");
}
elseif(n>0)
{
printf("Positive");
}
else
{
printf("Zero");
}
getch();
}
