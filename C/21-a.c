#include <stdio.h>

// Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide evenly into n).
// If d(a) = b and d(b) = a, where a !=  b, then a and b are an amicable pair and each of a and b are called amicable numbers.

// For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284. The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.

// Evaluate the sum of all the amicable numbers under 10000.

#define UPPER 10000

int sumDivisors(int number);

int main(void) {
	int divisors[UPPER] = {0};
	int i, amicableSum = 0;

	for(i = 0; i < UPPER; i++)
		divisors[i] = sumDivisors(i);

	for(i = 0; i < UPPER; i++) {
		if(divisors[i] < UPPER) {
			if(divisors[divisors[i]] == i && divisors[i] != i) {
				printf("%d and %d are amicable\n", i, divisors[i]);
				amicableSum += i;
			}
		}
	}

	printf("%d", amicableSum);

	return 1;
}

int sumDivisors(int number) {
	int i, sum = 0;

	for(i = 1; i * 2 <= number; i++)
		if(number % i == 0)
			sum += i;

	return sum;
}