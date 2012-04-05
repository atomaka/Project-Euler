#include <stdio.h>

// 215 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

// What is the sum of the digits of the number 2^1000?

#define POWER 1000
#define MAXSIZE 400

void power(int base, int power, int* digits);

int main() {
	int digits[MAXSIZE] = {0};
	int i, sum = 0;

	digits[0] = 1;

	power(2, POWER, digits);

	for(i = 0; i < MAXSIZE; i++) {
		sum += digits[i];
	}

	printf("%d\n", sum);
	
	return 1;
}

void power(int base, int power, int* digits) {
	int i, j;

	for(i = 1; i <= power; i++) {
		int current = 1, carry = 0;

		for(j = 0; j < MAXSIZE; j++) {
			current 	= (digits[j] << 1) + carry;
			digits[j] 	= current % 10;
			carry		= current / 10;
		}
	}
}