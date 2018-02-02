#include <stdio.h>
int main()
{
    char line[150];
    int i,spaces;
    spaces = 0;
    printf("Enter a line of string: ");
    scanf("%[^\n]", line);
    for(i=0; line[i]!='\0'; ++i)
     if (line[i]==' ')
        {
            ++spaces;
        }
         printf("\nWhite spaces: %d", spaces);
    }
