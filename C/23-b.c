#include <stdio.h>

#define DEFICITMAX 28123

int divisorSum(int number);

int main(void) {
	int abundantNumbers[DEFICITMAX] = {0};
	int sumOfAbundantNumbers[DEFICITMAX] = {0};
	int i, j, sum = 0;

	// generate list of abundant numbers 1-DEFICITMAX
	for(i = 1; i <= DEFICITMAX; i++)
		if(isAbundant(i) == 1)
			abundantNumbers[i] = 1;

	// generate list of all numbers that are the sum of abundant numbers
	for(i = 1; i <= DEFICITMAX; i++) {
		if(abundantNumbers[i] > 0) {
			for(j = 1; i + j <= DEFICITMAX; j++) {
				if(abundantNumbers[j] > 0 && sumOfAbundantNumbers[i + j] != 1) {
					sumOfAbundantNumbers[i + j] = 1;
				}
			}
		}
	}

	// sum up all positive integers that cannot be written as the sum
	for(i = 1; i <= DEFICITMAX; i++) {
		if(sumOfAbundantNumbers[i] == 0) {
			sum += i;
		}
	}

	printf("\n\n%d", sum);

	return 1;
}

int isAbundant(int number) {
	int i, sum = 0;

	for(i = 1; i <= number / 2; i++)
		if(number % i == 0)
			sum += i;

	return (sum > number) ? 1 : 0;
}