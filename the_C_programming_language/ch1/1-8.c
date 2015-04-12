#include <stdio.h>
void main()
{
	unsigned int tc = 0, nc = 0, bc = 0;
	int c;

	while ((c = getchar()) != EOF) {
		if (c == '\n')
			nc++;
		else if (c == ' ')
			bc++;
		else if (c == '\t')
			tc++;
		else
			;
		printf("c:%d tab:%u newline:%u blank:%u\n", c, tc, nc, bc);
	}
}
