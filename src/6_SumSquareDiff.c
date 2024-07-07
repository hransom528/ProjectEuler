// Harris Ransom
// Project Euler Q6: Sum Square Difference

#include <stdio.h>

int main() {
	const int RANGE = 100;
	int squaresSum = 0;	// Sum of the squares of nums
	int squaredSum = 0;	// Sum of the nums squared
	int diff;

	for (int i = 1; i <= RANGE; i++) {
		squaresSum += i*i;
		squaredSum += i;
	}
	squaredSum = squaredSum * squaredSum;
	diff = squaredSum - squaresSum;

	printf("Differences between sum of squares and squard sum: %d", diff);
	return 0;
}