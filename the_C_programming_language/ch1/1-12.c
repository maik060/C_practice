#include <stdio.h>

#define IN 1
#define OUT 0
void main()
{
	int state, c;
	
	state = OUT;
	while ((c = getchar()) != EOF) {
		if (c != '\t' && c != ' ' && c != '\n') {
			putchar(c);
			if (state == OUT)
				state = IN;
		} else if (state == IN) {
			state = OUT;
			putchar('\n');
		}
	}
}
