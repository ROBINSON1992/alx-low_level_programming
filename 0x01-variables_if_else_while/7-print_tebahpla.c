#include<stdio.h>
#include<unistd.h>
/**
 * main - entry block
 * Description: print lower alphabet in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
