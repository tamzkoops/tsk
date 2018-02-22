#include<stdio.h>
void main()
 {
   int n,m;
   printf("Enter the to check whether it is power of 2: ");
   scanf("%d",&n);
   m=(n&(n-1));
   if(m==0)
       printf("\nyes");
   else
       printf("\nNo");
 }
 
