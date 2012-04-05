#include <stdio.h>

// n! means n  (n  1)  ...  3  2  1

// For example, 10! = 10  9  ...  3  2  1 = 3628800,
// and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.

// Find the sum of the digits in the number 100!

#define NUMBER 100
#define MAXSIZE 500

int main(void) {
	int factorial [MAXSIZE] = {0};
	int i, j, sum = 0;

	factorial[0] = 1;
	for(i = NUMBER; i > 0; i--) {
		int current = 1, carry = 0;

		for(j = 0; j < MAXSIZE; j++) {
			current 	= factorial[j] * i + carry;
			factorial[j] 	= current % 10;
			carry 		= current / 10;
		}
	}

	for(i = 0; i < MAXSIZE; i++)
		sum += factorial[i];

	printf("%d", sum);

	return 1;
}