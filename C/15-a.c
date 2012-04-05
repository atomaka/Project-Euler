#include <stdio.h>

// Starting in the top left corner of a 22 grid, there are 6 routes (without backtracking) to the bottom right corner.


// How many routes are there through a 2020 grid?
#define GRID_SIZE 2

long long traverse(int x, int y);

int main() {
	printf("%lld", traverse(0, 0));
	
	return 1;
}

long long traverse(int x, int y) {
	long long i = 0;
	printf("(%d, %d)\n", x, y);

	if(x < GRID_SIZE) {
		i += traverse(x + 1, y);
	}
	if(y < GRID_SIZE) {
		i += traverse(x, y + 1);
	}

	if(x == GRID_SIZE && y == GRID_SIZE) {
		return 1;
	}

	return i;
}