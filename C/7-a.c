#include <stdio.h>

// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

// What is the 10 001st prime number?

void main() {
	int primes = 0;
	int i = 1;

	while(1) {
		if(isPrime(i) == 1) {
			primes++;
		}

		if(primes == 10001) {
			break;
		}

		i++;
	}

	printf("%d", i);
}

int isPrime(int number) {
	int i;

	if(number % 2 == 0) return 0;

	for(i = number; i > 2; i -= 2) {
		if(number % i == 0 && i != number) return 0;
	}

	return 1;
}