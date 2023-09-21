#include<stdio.h>
#include<unistd.h>
/**
 * main - entry block
 * Description: prints all base 16 numbers in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	for (digit = 'a'; digit <= 'f'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
