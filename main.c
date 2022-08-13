#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Password generator, version 1 */
int main()
{
	int i, len = 16;
	int start = 33; // Start of ASCII table range
	int end = 126; // End of ASCII table range
	char p[len];

	// Initialize RNG
	srand(time(NULL));

	for (i = 0; i < len; i++) {
		int ascii_numeral = (rand() % (end - start + 1)) + start;
		putc(ascii_numeral, stdout);
	}

	return 0;
}
