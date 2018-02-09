#include<stdio.h>
void main()
{
    int n,i,count=0;
    char c[100];
    printf("Enter the string:");
    scanf("%s",&c);
    n=strlen(c);
    for(i=0;i<n;i++)
    {
        if(c[i]!="\0")
        {
            count++;
        }
        
    }
    printf(" %d",count);
}
