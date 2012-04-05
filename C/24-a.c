#include <stdio.h>

// A permutation is an ordered arrangement of objects. For example, 3124 is one possible permutation of the digits 1, 2, 3 and 4. If all of the permutations are listed numerically or alphabetically, we call it lexicographic order. The lexicographic permutations of 0, 1 and 2 are:

// 012   021   102   120   201   210

// What is the millionth lexicographic permutation of the digits 0, 1, 2, 3, 4, 5, 6, 7, 8 and 9?

#define MAXPERM 3

void swap(int i, int j, int numbers[]);
void permutate(int numbers[]);

int main(void) {
	// int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int numbers[] = { 0, 1, 2 };
	int i, permutations = 0;

	i = sizeof(numbers) - 1;
	while(permutations < MAXPERM) {
		while(numbers[i - 1] >= numbers[i]) {
			i--;
		}

		int j = sizeof(numbers);

		while(numbers[j - 1] <= numbers[i - 1]) {
			j = j - 1;
		}

		swap(i - 1, j - 1, numbers);

		i++;
		j = sizeof(numbers);

		while(i < j) {
			swap(i - 1, j - 1, numbers);
			i++;
			j--;
		}

		permutations++;
	}

	for(i = 0; i < MAXPERM; i++)
		printf("%d, ", numbers[i]);

	return 1;
}

void permutate(int numbers[]) {

}

void swap(int i, int j, int numbers[]) {
	int temp = numbers[i];
	numbers[i] = numbers[j];
	numbers[j] = temp;
}