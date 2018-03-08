#include <stdio.h>
#include<math.h>
int main()
{ 
    float l,b,area;
    printf("Enter the length and breadth:");
    scanf("%f%f",&l,&b);
    area=l*b;
    printf("Area is:%0.5f",area);
    
    return 0;
}
