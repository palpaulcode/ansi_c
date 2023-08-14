#include <stdio.h>

/**
 * main - The while gets a character,assings it to c, and
 * then tests whether the character was the end-of-file 
 * signal. If it was not, the body of the while is 
 * executed, printing the character. The while then 
 * repeats. 
 *
 */

/* copy inout to output; 2nd version */

int main(void)
{
	int c;

	while ((c = getchar()) != EOF)
		putchar(c);
}
