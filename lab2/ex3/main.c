#include <stdio.h>
#include "PrintASCII.h"
/*Chonsuta Drew
* Cis 2010
* 2/4/2019
* Ex 3 Lab 2
* main program
*/
int main()
{
	char buffer[80];
	
	printf("What is your string? ");
	scanf("%s",buffer);
	
	PrintASCII(buffer);

	return 0;
}
