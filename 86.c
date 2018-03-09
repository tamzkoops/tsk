#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int n,i,j,c=0;
    printf("Enter the string:");
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
     for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }

    if(c==0)
    {
    printf("Isogram");
    }
    else
    {
    printf("Not isogram");
    }
}

