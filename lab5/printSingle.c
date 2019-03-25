#include <stdio.h>

void printSingle (float f)
{
	unsigned int *up = (unsigned int*) &f;
	unsigned int s, exp, frac;
	unsigned int a = 0xffffffff;
	s = ((*up)>>31)&1;
	exp = ((*up)>>23)&a;
	frac = (*up) & 0x7fffffff;
	printf("s = %d\n",s);
	printf("exp = %d\n",exp);

	int bi[32];
	int n;
	if(frac == 0)
	{
		printf("frac =  00000000000000000000000\n");
		
	}
	else
	{
		while (frac!=0)
		{
			for (int j = 0; j<32; j++)
			{
				n= frac/2;
				bi[j] = frac%2;
				frac = n;
		
			}
		}
		
		printf("frac: ");
		for (int i = 22; i >=0; i--)
		{
			printf("%d", bi[i]);
		}
		printf("\n");
	}
}
