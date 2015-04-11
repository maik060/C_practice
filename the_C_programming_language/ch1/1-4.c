#include <stdio.h>
#define C2F(c) (c * 9.0 / 5.0 + 32.0)
int main(int argc, char *argv[])
{
	float c;
	printf("Celsius		Fahrentheit\n");
	for (c = 0; c <= 300; c += 20) {
		printf("%f	%3.1f\n", c, C2F(c));
	}
	return 0;
}
