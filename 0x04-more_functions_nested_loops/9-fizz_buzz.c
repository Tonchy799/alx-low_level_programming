#include <stdio.h>

/**
 * main - prints numbers from 0-100 but for:
 * @Fizz: print fizz when a multiple of 3
 * @Buzz: print Buzz when a multiple of 5
 * @FizzBuzz: when a multiple of 3 and 5
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz");

		else if ((i % 3) == 0)
			printf("Fizz");

		else if ((i % 5) == 0)
			printf("Buzz");

		else
			printf("%d", i);

		if (i == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
