#include <stdio.h>
/*Chonsuta Drew
*CIS 2010
*2/4/2019
*Ex1 Lab2
*/
void main()
{
	int num;

	printf("What is your number?");
	scanf("%d",&num);

	printf("%d as unsigned value is %u\n",num,(unsigned char)num);
	printf("%d as a hexadecimal value is %x\n",num,num);
	
}
