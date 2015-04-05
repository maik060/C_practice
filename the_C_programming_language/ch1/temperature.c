#include <stdio.h>

int main(int argc, char *argv[])
{
	int c;
	for(c = 0; c <= 300; c += 20) {
		printf("%d	%d\n", c, c * 9 / 5 + 32);
	}
	return 0;
}
