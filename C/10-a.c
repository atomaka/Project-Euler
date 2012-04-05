#include <stdio.h>
#include <math.h>

// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

// Find the sum of all the primes below two million.

int main() {
	long long sum = 0;
	int primes = 0;
	
	int i = 2;
			 
	while(i < 2000000) {
		if(isPrime(i) == 1) {
			sum += i;
			primes++;
		}

		if(i == 2) {
			i = 3;
		} else {
			i = i + 2;
		}
	}

	printf("%d primes sum: '%lld'\n\n", primes, sum);

	return 1;
}

int isPrime(int number) {
	int i;
	for(i = 3; i < (int)sqrt(number) + 1; i = i + 2) {
		if(number % i == 0 && i != number) {
			return 0;
		}
	}

	return 1;
}