#include <stdio.h>

// A perfect number is a number for which the sum of its proper divisors is exactly equal to the number. For example, the sum of the proper divisors of 28 would be 1 + 2 + 4 + 7 + 14 = 28, which means that 28 is a perfect number.

// A number n is called deficient if the sum of its proper divisors is less than n and it is called abundant if this sum exceeds n.

// As 12 is the smallest abundant number, 1 + 2 + 3 + 4 + 6 = 16, the smallest number that can be written as the sum of two abundant numbers is 24. By mathematical analysis, it can be shown that all integers greater than 28123 can be written as the sum of two abundant numbers. However, this upper limit cannot be reduced any further by analysis even though it is known that the greatest number that cannot be expressed as the sum of two abundant numbers is less than this limit.

// Find the sum of all the positive integers which cannot be written as the sum of two abundant numbers.

#define DEFICITMAX 28123
int divisorSum(int number);

int main(void) {
	int abundantSums[DEFICITMAX] = {1};
	int abundantAdds[DEFICITMAX] = {0};
	int i, j, abundantAddSum = 0;

	for(i = 1; i <= DEFICITMAX; i++) {
		abundantSums[i] = divisorSum(i);

		if(abundantSums[i] <= i)
			abundantSums[i] = 0;
	}

	for(i = 1; i <= DEFICITMAX; i++) {
		if(abundantSums[i] > 0) {
			for(j = 1; i + j <= DEFICITMAX; j++) {
				if(abundantSums[j] > 0 && abundantAdds[i + j] != 1) {
					abundantAdds[i + j] = 1;
				}
			}
		}
	}

	for(i = 1; i <= DEFICITMAX; i++) {
		if(abundantAdds[i] == 0) {
			abundantAddSum += i;
		}
	}

	printf("\n\n = %d", abundantAddSum);

	return 1;
}

int divisorSum(int number) {
	int i, sum = 0;

	for(i = 1; i <= number / 2; i++)
		if(number % i == 0) {
			sum += i;
		}
			

	return sum;
}