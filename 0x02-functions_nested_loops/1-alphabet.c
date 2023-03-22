#include "main.h"

/**
 * print_alphabet - prints the alphabe, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char ch;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
