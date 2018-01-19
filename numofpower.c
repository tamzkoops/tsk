#include <stdio.h>
int main()
{
    int bas, exponent;
    long long result = 1;
    printf("Enter a base number: ");
    scanf("%d", &bas);
    printf("Enter an exponent: ");
    scanf("%d", &exponent);
    while (exponent != 0)
    {
        result *= bas;
        --exponent;
    }
    printf("Answer = %lld", result);
    return 0;
}
