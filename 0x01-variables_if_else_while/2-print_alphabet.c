#include<stdio.h>
#include<unistd.h>
/**
 * main - Entry block
 * Description: prints alphabet in lowecase
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
