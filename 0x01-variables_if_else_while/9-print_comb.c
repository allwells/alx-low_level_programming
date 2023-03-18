#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int n = 48;

	// 57 Corresponds with ASCII character 9
	while (n <= 57)
	{
		putchar (n);

		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}

		n++;
	}

	// Add new line
	putchar ('\n');

	return (0);
}
