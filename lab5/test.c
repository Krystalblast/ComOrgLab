#include <stdio.h>
#include "printBin.h"
#include "printSingle.h"

void main()
{
 	int inputInt;
	float inputFloat;
	printf("Enter Integer: ");
	scanf("%d",&inputInt);
	printBin(inputInt);
	printf("Enter Floating point: ");
	scanf("%f",&inputFloat);
	printSingle(inputFloat);
}
