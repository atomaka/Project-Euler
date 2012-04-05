#include <stdio.h>

// A Pythagorean triplet is a set of three natural numbers, a  b  c, for which,

// a2^ + b^2 = c^2
// For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

// There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc.

int main() {
	int n, m;

	int a, b, c;

	for(n = 1; n < 20; n++) {
		for(m = n  + 1; m <= 20; m++) {
			a = m*m - n*n;
			b = 2*n*m;
			c = n*n + m*m;

			printf("\n%d + %d + %d = %d", a, b, c, a + b + c);

			if(a + b + c == 1000) goto found;
		}
	}

	found:
	printf("\n\n%d^2 + %d^2 = %d^2", a, b, c);
	printf("\n\nProduct = %d", a * b * c);

	return 1;
}