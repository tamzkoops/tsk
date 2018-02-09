#include<stdio.h>
void main()
{
   int N, first = 0, second = 1, next, i;
   printf("Enter the number of terms\n");
   scanf("%d",&N);
   printf("First %d terms of Fibonacci series are :-\n",N);
   for ( i = 0 ; i < N ; i++ )
   {
      if ( i <= 1 )
         next =i;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      printf("%d\n",next);
   }
}
