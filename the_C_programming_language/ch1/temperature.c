#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20
#define FAHR_TO_CELSIUS(f) (5.0 / 9.0 * (f - 32.0))

int main(int argc, char *argv[])
{
	float fahr;

	for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
		printf("%3.0f	%6.1f\n", fahr, FAHR_TO_CELSIUS(fahr));
	}

	return 0;
}
