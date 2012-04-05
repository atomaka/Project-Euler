#include <stdio.h>
#include <math.h>

// The prime factors of 13195 are 5, 7, 13 and 29.

// What is the largest prime factor of the number 600,851,475,143 ?
void main() {
	long long number = 600851475143;

	int i = (int) (sqrt(number) + 0.5);

	while(i > 2) {
		double quotient = (double)number / (double)i;

		if(quotient / 1.0 == (int)quotient) {
			int bool = isPrime(i);
			if(bool == 1) {
				printf("\n\nLargest Prime Factor: %d", i);
				break;
			}
		}

		//decrement i; preferably only going through odds?
		i = i - 1;
	}
}

int isPrime(int number) {
	int i;
	for(i = 2; i < number; i++) {
		if(number % i == 0 && i != number) {
			return 0;
		}
	}

	return 1;
}