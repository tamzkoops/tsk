#include<stdio.h>
#include<math.h>
void main()
{
  int a,b,i;
  printf("Enter the number:");
  scanf("%d\t%d",&a,&b);
  i=a*b;
 if(sqrt(i)==a&&sqrt(i)==b)
 {
   printf("YES");
 }
 else
 {
   printf("NO");
 }
}
