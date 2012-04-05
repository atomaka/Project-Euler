#include <stdio.h>
#include <math.h>

// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 99.

// Find the largest palindrome made from the product of two 3-digit numbers.

void main() {
	int i, j, k, palindrome;

	for(i = 100; i < 1000; i++) {
		for(j = 100; j < 1000; j++) {
			int product = i * j;

			//test if product is palindrome and store
			int reverse = 0, number = product;

			while(number > 0) {
				int last = number % 10; 		// find the last digit
				reverse = reverse * 10 + last; 	// push over the reverse and tack on the last digit
				number = number / 10;			// chop off the last digit
			}

			if(product == reverse) {
				if(product > palindrome) {
					palindrome = product;	
				}
			}
			
		}
	}

	printf("%d", palindrome);
}