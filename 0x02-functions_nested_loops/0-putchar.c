#include "main.h"

/**
 *   main - prints _putchar, follow by a new line
 *
 *   Return: Always 0 (Success)
 */

int main(void)

{
	char ab[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{

	_putchar(ab[c]);

	}
	_putchar('\n');

	return (0);

}
