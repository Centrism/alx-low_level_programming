#include "main.h"

/**
 *  * print_alphabet - check the code for ALX School students.
 *
 *   *
 *
 *    * Return: Always 0.
 *
 */

void print_alphabet(void)

{

	char letter = 'a';

	while (letter <= 'z')
	{

		_putchar (letter);
		letter++;
	}
	_putchar ('\n');

}
