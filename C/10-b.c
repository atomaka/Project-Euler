#include <stdio.h>
#include <math.h>

// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

// Find the sum of all the primes below two million.

#define TABLE 100000

int isPrime(int, int, int*);

int main() {
	long long sum = 0;
	int primesCount = 0, totalPrimes = 0;
	int primes[TABLE] = {0};
	
	int i = 2;
	
	while(i < 20000000) {
		if(isPrime(i, primesCount, primes) == 1) {
			if(primesCount < TABLE) {
				primes[primesCount++] = i;	
			}
			sum += i;
			totalPrimes++;
		}

		if(i == 2) {
			i = 3;
		} else {
			i = i + 2;
		}
	}

	printf("%d primes sum: '%lld'\n\n", totalPrimes, sum);

	return 1;
}

int isPrime(int number, int primesCount, int *primes) {
	int i;
	for(i = 0; i < primesCount && primes[i] * primes[i] <= number; i++) {
		if(number % primes[i] == 0  && number != primes[i]) {
			return 0;
		}
	}

	if(i > 0) {
		for(i = (primes[i - 1] | 1); i * i <= number; i = i + 2) {
			if(number % i == 0 && i != number) {
				return 0;
			}
		}
}

	return 1;
};