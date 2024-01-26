#include <stdio.h>

int main(void)
{
    int i, limit, number=1;
	    printf ("Enter an integer ");

	    scanf ("%d", &limit );

	        for (i=1; i<=limit; i++)

		    number=i*number;

        printf("Thr factorial of %d is %d\n",limit,number);

	return 0;
}
