#include <stdio.h>

void main() {
	long long number = 600851475143;
	int divisor = 2;
	while (number > 1) {
		if (0 == (number % divisor)) {
			number /= divisor;
			divisor--;
		}
		divisor++;
	}
	printf("%d", divisor);
}