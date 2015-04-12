#include <stdio.h>

#define IN 1
#define OUT 0
void main()
{
	int wc, c, cc, nc, state;

	nc = cc = wc = 0;
	state = OUT;
	while ((c = getchar()) != EOF) {
		cc++;
		if (c == '\n')
			nc++;
		if (state == OUT && c != '\t' && c != ' ' && c != '\n') {
			state = IN;
			wc++;
		} else if (state == IN && (c == '\t' || c == ' ' || c == '\n'))
			   state = OUT;
	}
	printf("wc:%d, nc:%d, cc:%d\n", wc, nc ,cc);
}
