#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Prints all possible combinations of single-digit numbers.
 * Numbers are separated by a comma and a space.
 * Numbers are printed in ascending order.
 * The program uses the putchar function.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 48; digit <= 57; digit++)
	{
		putchar(digit);

		if (digit != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
