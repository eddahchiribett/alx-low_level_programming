#include "main.h"
/**
 * print_alphabet - main block
 *
 * Description: prints each letter of the alphabet, ending with a newline
 */
void print_alphabet(void)
{
	char letter;

	 for (letter = 'a'; letter <= 'z'; letter++)
	 {
		  _putchar(letter);
	 }
	  _putchar('\n');
}
