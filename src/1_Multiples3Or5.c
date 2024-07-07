// Harris Ransom
// Project Euler Q1: Multiples of 3 or 5

#include <stdio.h>

int main() {
	const int RANGE = 1000;
	int sum = 0;

	for (int i = 0; i < RANGE; i++) {
		if ((i % 3 == 0) || (i % 5 == 0)) {
			sum += i;
		}
	}

	printf("Sum of all multiples of 3 or 5 below %d: %d\n", RANGE, sum);
	return 0;
}