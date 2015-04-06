#define FAHR_TO_CELSIUS(f) (5.0 / 9.0 * (f - 32.0))

int main(int argc, char *argv[])
{
	float f;

	printf("Fahrenheit	Celsius\n");
	for (f = 0.0; f <= 300; f += 20) {
		printf("%3.0f	%6.1f\n", f, FAHR_TO_CELSIUS(f));
	}
	return 0;
}
