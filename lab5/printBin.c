#include <stdio.h>

void printBin (int value)
{
	int bi[32];
	int n;
	if (value == 0)
	{
		printf("Binary: 00000000\n");
		
	}
	else
	{
		unsigned int num = (unsigned int)value;
		while (num!=0)
		{
			for (int j = 0; j<32; j++)
			{
				n= num/2;
				bi[j] = num%2;
				num = n;
		
			}
		}
		
		printf("Binary: ");
		for (int i = 31; i >=0; i--)
		{
			printf("%d", bi[i]);
		}
		printf("\n");
	}

		
}
