#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* code */
	int a,b,c;
	scanf ("%d",&a);

	for (int i = 0; i <= a; ++i)
	{
		b=1;
		while (b<=i)
		{
			printf(" ");
			++b;	
		}
		c=i;
		while (c<a){
			++c;
			printf("*");
		}
		printf(" \n");
		/* code */
	}

	return 0;
}
