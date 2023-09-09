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
	char sep = ','; /* Initialize separator */
	char space = ' '; /* Initialize space character */
	int i, j, k; /* Initialize loop variables */

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				/* Print separator and space if not the last combination */
				if (!(i == 7 && j == 8 && k == 9))
				{
					putchar(sep);
					putchar(space);
				}
			}
		}
	}

	putchar('\n'); /* Print newline character */

	return (0);
}
