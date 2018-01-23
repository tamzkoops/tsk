#include <stdio.h>
int main()
{
    int number, originalNumber,remainder, result = 0;
    printf("Enter a three digit integer: ");
    scanf("%d", &number);
    originalNumber = number;
    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += remainder*remainder*remainder;
        originalNumber /= 10;
    }
    if(result == number)
        printf("yes, %d is an Armstrong number.",number);
    else
        printf("No,%d is not an Armstrong number.",number);
    return 0;
}
