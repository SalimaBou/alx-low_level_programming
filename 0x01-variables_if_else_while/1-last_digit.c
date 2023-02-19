#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main: - Return type of void when No value is returned.
* Return: 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	printf("Last digit of n is %d and is greater than 5\n", n);
	else if (n == 0)
	printf("Last digit of n is %d and is 0\n", n);
	else if (n < 6 && n != 0)
	printf("Last digit of n is %d and is less than 6 and not 0\n", n);
	return (0);
}
