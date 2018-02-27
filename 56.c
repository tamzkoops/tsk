#include <stdio.h>  
   
int main() {  
    char character;
    printf("Enter a Character\n");  
    scanf("%c", &character);  
       
    if((character >='a' && character <='z')||(character >='A' && character <='Z')||(character >= '0' && character <= '9') )
    printf("Both");
    return 0;  
}
