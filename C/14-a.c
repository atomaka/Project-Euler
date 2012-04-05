#include <stdio.h>

int main() {
	int i, scorer = 0;
	int longestScore = 0;

	for(i = 1; i < 1000000; i++) {
		if(i % 50000 == 0) printf("ON THE %d ITERATION\n", i);
		long long number = i;	
		int score = 1;
		while(number != 1) {
			if(number % 2 == 0) {
				number = number / 2;
			} else {
				number = 3 * number + 1;
			}

			score++;
		}

		if(score > longestScore) {
			if(score > 350) printf("%d set a new high score of %d\n", i, score);
			longestScore = score;
			scorer = i;
		}
	}

	printf("\n\n%d scored %d", scorer, longestScore);
	
	return 1;
}