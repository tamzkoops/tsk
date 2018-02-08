#include <stdio.h>
int main()
{
    int array[50], N, i, largest; 
    printf("\n Enter the size of N: ");
    scanf("%d", &N);
    printf("\n Enter %d elements of  the array: ", N);
    for (i = 0; i < N; i++)
    scanf("%d", &array[i]);
    largest = array[0];
    for (i = 1; i < N; i++)
    {
        if (largest < array[i])

            largest = array[i];
    }
    printf("\n largest element present in the given array is : %d", largest);
    return 0;
}
