#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 * This program generates and prints all possible combinations
 * of three different digits in ascending order, separated by ", ".
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i = 0; i <= 7; i++)
	{
		for (int j = i + 1; j <= 8; j++)
		{
			for (int k = j + 1; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(',');
				putchar(' ');
				putchar(j + '0');
				putchar(',');
				putchar(' ');
				putchar(k + '0');
				putchar('\n');
			}
		}
	}

	return (0);
}
