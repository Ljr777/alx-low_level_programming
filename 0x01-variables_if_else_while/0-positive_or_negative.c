#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return : Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		Printf("%d is positve\n", n);
	else if (n == 0)
		Printf("%d is zero\n", n);
	else
		Printf("%d is negative\n", n);
	return (0);
}
