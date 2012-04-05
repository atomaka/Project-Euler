#include <stdio.h>

// Starting in the top left corner of a 22 grid, there are 6 routes (without backtracking) to the bottom right corner.


// How many routes are there through a 2020 grid?
#define GRID_SIZE 20

long long traverse(int x, int y);
int isCorner(int x, int y);

int main() {
	long long paths = 0;
	paths = traverse(0, 0);

	printf("%lld", paths);
	
	return 1;
}

long long traverse(int x, int y) {
	static long long grid[GRID_SIZE][GRID_SIZE] = {{0}};
	long long paths = 0;

	if(GRID_SIZE - x == 0 || GRID_SIZE - y == 0) {
		grid[x][y] = 1;
		return 1;
	}

	if(grid[x][y] == 0) {
		if(x < GRID_SIZE) {
			paths += traverse(x + 1, y);
		}
		if(y < GRID_SIZE) {
			paths += traverse(x, y + 1);
		}

		grid[x][y] = paths;
		grid[y][x] = paths;
	}

	return grid[x][y];
}