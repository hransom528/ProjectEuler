// Harris Ransom
// Project Euler Q2: Even Fibonacci Numbers

#include <stdio.h>

int main() {
	const int RANGE = 4000000;
	int prev1 = 1;
	int prev2 = 1;
	int num, sum;

	do {
		num = prev1 + prev2;
		if ((num % 2 == 0) && (num <= RANGE)) {
			sum += num;
		}
		prev2 = prev1;
		prev1 = num;
	} while (num < RANGE);

	printf("Sum of even Fibonnaci numbers below %d: %d", RANGE, sum);
	return 0;
}