
#include <stdio.h>
void main()
{
char ch[20],i,count=0;
printf("Enter the string:\n");
scanf("%[^\n]s",ch);
while(ch[i]!='\0')
{
	if(ch[i]>='0'&&ch[i]<='9')
	{
	count++;
}
i++;
}
printf("%d",count);
}
