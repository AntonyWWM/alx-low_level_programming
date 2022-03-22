#include <stdio.h>
/**
 * main - prints Fizz for 3 and its multiples, Buzz for 5 and its multiples.
 *
 * Return: void.
 */

int main(void)
{

	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}

		if (i != 100)
		{
			putchar(' ');
		}

		i++;
	}
	putchar('\n');
	return (0);


}
