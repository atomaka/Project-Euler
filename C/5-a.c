#include <stdio.h>

// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

void main() {
	int i = 20; //no smaller than this
	int j;

	while(1) {
		for(j = 19; j > 0; j--) {
			if(i % j != 0) { 
				break;
			}
		}

		if(j == 0) {
			break;
		}

		i += 20;
	}

	printf("%d", i);
}