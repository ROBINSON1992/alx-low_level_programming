#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers.
 * Numbers range from 0 to 99, printed as two-digit numbers.
 * Combinations are separated by a comma and a space.
 * Combinations are printed in ascending order.
 * 00 01 and 01 00 are considered the same combination of the numbers 0 and 1.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens1, ones1, tens2, ones2;

	for (tens1 = 0; tens1 <= 9; tens1++)
	{
		for (ones1 = 0; ones1 <= 9; ones1++)
		{
			for (tens2 = tens1; tens2 <= 9; tens2++)
			{
				for (ones2 = (tens2 == tens1) ? (ones1 + 1) : 0; ones2 <= 9; ones2++)
				{
					putchar((char)(tens1 + '0'));
					putchar((char)(ones1 + '0'));
					putchar(' ');
					putchar((char)(tens2 + '0'));
					putchar((char)(ones2 + '0'));

					if (!(tens1 == 9 && ones1 == 8 && tens2 == 9 && ones2 == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

