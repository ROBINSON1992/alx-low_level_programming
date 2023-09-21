#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two different digits
 * separated by a comma and a space.
 * Combinations are printed in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, m;

	for (i = 0; i <= 8; i++)
	{
		for (m = i + 1; m <= 9; m++)
		{
			putchar(i + '0');
			putchar(m + '0');

			if (i < 8 || m < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
