#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* code */
	int a,b;
	scanf ("%d",&a);

	for (int i = 1; i <= a; ++i)
	{
		b=1;
		while (b<=i)
		{
			printf("*");
			++b;	
		}
		printf(" \n");
		/* code */
	}
	return 0;
}
