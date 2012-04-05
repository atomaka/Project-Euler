#include <stdio.h>
#include <math.h>

#define DIGITS 100000

int main(void) {
	long double goldenRatio = (1 + sqrt(5)) / 2;

	int number1 = (int)ceil((DIGITS - 1 * log10(5)) / log10(goldenRatio));
	int number2 = (int)ceil((DIGITS - 1 + log10(5) / 2) / log10(goldenRatio));

	printf("%d = %d\n", number1, number2);

	return 1;
}