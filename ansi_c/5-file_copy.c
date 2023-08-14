#include <stdio.h>

/**
 * main - Copies input to its output one character at a time
 *
 * read a character
 * while (character is not end-of-file indicator)
 *	output the character just read
 *	read a character
 *
 */

/* copy input to output; 1st version */
int main(void)
{
	int c;

	c = getchar();
	while (c != EOF)
	{
		putchar(c);
		c = getchar();
	}
}
