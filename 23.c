#include <stdio.h>
#include<conio.h>
#define MinSIZE 1000
int main()
{
int arr[MinSIZE];
int i, N;
printf("Enter size of array: ");
scanf("%d", &N);
printf("Enter %d elements in the array : ", N);
for(i=0; i<N; i++)
{
scanf("%d", &arr[i]);
}
printf("\nElements in array are: ");
for(i=0; i<N; i++)
{
printf("%d, ", arr[i]);
}
return 0;
getch();
}

