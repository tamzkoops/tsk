#include<stdio.h>
void main()
{
  int i,num;
  printf("Enter the number:");
  scanf("%d",&num);
  for(i=1;i<=num;i++)
    {
        if(num%i==0)
        printf("%d\t",i);
    }
  
  
}
