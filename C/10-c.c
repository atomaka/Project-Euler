#include <stdio.h>

#define LENGTH 1000	

void main() {
	long long sum = 0;
	int numbers[LENGTH + 1] = {0};
	int i = 1, j;

	while(i < LENGTH) {
		if(numbers[i] == 1) {
			continue;
		}

		for(j = 1; i * j < LENGTH; j++) {
			numbers[i * j] = 0;
		}

		i++;
	}

	for(i = 1; i < LENGTH; i++) {
		if(numbers[i] == 0) {
			sum += i;
		}
	}

	printf("SUM: %lld", sum);
}