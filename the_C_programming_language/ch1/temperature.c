#include <stdio.h>

int main(int argc, char *argv[])
{
	int f;
	for(f = 0; f <= 300; f += 20) {
		printf("%d	%d\n", f, 5 * (f - 32) / 9);
	}
	return 0;
}
