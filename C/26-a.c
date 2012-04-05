#include <stdio.h>

// A unit fraction contains 1 in the numerator. The decimal representation of the unit fractions with denominators 2 to 10 are given:

// 1/2	= 	0.5
// 1/3	= 	0.(3)
// 1/4	= 	0.25
// 1/5	= 	0.2
// 1/6	= 	0.1(6)
// 1/7	= 	0.(142857)
// 1/8	= 	0.125
// 1/9	= 	0.(1)
// 1/10	= 	0.1
// Where 0.1(6) means 0.166666..., and has a 1-digit recurring cycle. It can be seen that 1/7 has a 6-digit recurring cycle.

// Find the value of d  1000 for which 1/d contains the longest recurring cycle in its decimal fraction part.

#define UPPER 1000

char* convertToDigits(double number);

int main(void) {
	int i, j = -1, primes[UPPER] = {0};

	for(i = 1; i < UPPER; i++)
		if(isPrime(i))
			primes[j++] = i;

	for(i = 0; i < j; i++) {
		printf("1/%d: %.15f\n", primes[i], 1.0 / primes[i]);
	}
	
	return 1;
}

char* convertToDigits(double number) {

}

int isPrime(int number) {
	int i;

	for(i = 2; i * i < number; i += 2) {
		if(number % i == 0 && i != number) {
			return 0;
		}
	}

	return 1;
}