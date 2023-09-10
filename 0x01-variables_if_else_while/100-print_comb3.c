#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits.
 * Numbers must be separated by ', ' (comma followed by tab).
 * The two digits must be different.
 * 01 and 10 are considered the same combination.
 * Print only the smallest combination of two digits.
 * Numbers should be printed in ascending order with two digits.
 * You can only use the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (!(i == 8 && j == 9))
			{
				putchar(',');
				putchar('\t');
			}
		}
	}

	putchar('\n');
	return (0);
}
