#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* code */
	int a,b;
	scanf ("%d",&a);

	for (int i = a; i >= 1; --i)
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
