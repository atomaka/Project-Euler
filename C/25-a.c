#include <stdio.h>
#include <math.h>

// The Fibonacci sequence is defined by the recurrence relation:

// F(n) = F(n-1) + F(n-2), where F(1) = 1 and F(2) = 1.
// Hence the first 12 terms will be:

// F(1) = 1
// F(2) = 1
// F(3) = 2
// F(4) = 3
// F(5) = 5
// F(6) = 8
// F(7) = 13
// F(8) = 21
// F(9) = 34
// F(10) = 55
// F(11) = 89
// F(12) = 144
// The 12th term, F(12), is the first term to contain three digits.

// What is the first term in the Fibonacci sequence to contain 1000 digits?

#define DIGITS 1000

int main(void) {
	long double goldenRatio = (1 + sqrt(5)) / 2;

	// int number = (int)ceil((DIGITS - 1 * log10(5)) / log10(goldenRatio));
	int number = (int)ceil((DIGITS - 1 + log10(5) / 2) / log10(goldenRatio));

	printf("%d", number);

	return 1;
}