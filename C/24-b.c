#include <stdio.h>

#define GETPERM 1000000

void permutate(int set[], int setSize);
void swap(int a, int b, int numbers[]);
void printSet(int set[], int setSize);

int main(void) {
	int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int setSize = sizeof(numbers) / sizeof(numbers[0]);

	permutate(numbers, setSize);

	printf("\nPermutation %d: ", GETPERM);
	printSet(numbers, setSize);

	return 1;
}

void permutate(int a[], int setSize) {
	int permutations = 0;
	int k, l;

	while(permutations < GETPERM - 1) {
		// Find the largest index k such that a[k] < a[k + 1]. If no such index exists, the permutation is the last permutation
		for(k = setSize - 2; a[k] >= a[k + 1]; k--)
			;


		// Find the largest index l such that a[k] < a[l]. Since k + 1 is such an index, l is well defined and satisfies k < l.
		for(l = setSize - 1; a[k] >= a[l]; l--)
			;

		// Swap a[k] with a[l].
		swap(k, l, a);

		// Reverse the sequence from a[k + 1] up to and including the final element a[n].
		for(k++, l = setSize - 1; k < l; k++, l--)
			swap(k, l, a);

		permutations++;
	}
}

void swap(int a, int b, int set[]) {
	int temp 	= set[b];
	set[b] 		= set[a];
	set[a] 		= temp;
}

void printSet(int set[], int setSize) {
	int i;

	for(i = 0; i < setSize; i++)
		printf("%d, ", set[i]);
}