#include <stdio.h>
/*Chonsuta Drew
*2/4/2019
*Ex2 Lab2
*/
void PrintASCII(char string[]);
int main()
{
	char buffer[80];
        char *gets(char *buffer);
	printf("What is your string? ");
	/*scanf("%s",buffer);*/
	gets(buffer);
	PrintASCII(buffer);

	return 0;
}

void PrintASCII(char string[])
{
	for(int i=0; i<=string[i];i++)
	{
		printf("%c ",string[i]);
	}
	printf("\n");

	for(int i=0; i<=string[i];i++)
	{
		printf("%x ",string[i]);
	}
	printf("\n");

	for(int i=0; i<=string[i]; i++)
	{
		printf("%d ",string[i]);
	}
	printf("\n");
}
