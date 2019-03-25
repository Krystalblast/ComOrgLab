/*Chonsuta Drew
 * CIS 2010
 * 2/4/2019
 * Ex 4 Lab2
 * When pointers are used, C will pass by adress
 *The following program is passing by address
 */

#include <stdio.h>
int sum(int*,int*);
void main(void)
{
	int i=3,j=4;
	int total;
	total = sum(&i,&j);
	printf("i:%d j:%d Total:%d\n",i,j,total);
}

int sum(int *x,int *y)
{
	*x=1;
	*y=1;
	return *x+*y;
}
