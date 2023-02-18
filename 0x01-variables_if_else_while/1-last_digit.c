#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: A
 */

int main(void)
{
	int n, l_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*my code*/
	l_digit = n % 10; /*gets last digit*/
	if (l_digit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, l_digit);
	else if (l_digit == 0)
		printf("Last digit of %i is %i and is 0\n", n, l_digit);
	else if (l_digit < 6 && l_digit != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, l_digit);
	return (0);
}
