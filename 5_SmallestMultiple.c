// Harris Ransom
// Project Euler Q5: Smallest Multiple

// See: https://stackoverflow.com/questions/147515/least-common-multiple-for-3-or-more-numbers

#include <stdio.h>

// Finds GCD of two ints
int gcd(long a, long b) {
	// Implements Euclidean algorithm
	long temp;
	if (a > b) {
		temp = b;
		b = a % b;
		a = temp;
	}
	if (b % a == 0)
		return a;
	else
		return gcd(b%a, a);
}

// Finds LCM of two nums
int lcm(long a, long b) {
	long gcdNum = gcd(a, b);
	return (a * b) / gcdNum;
}

// Finds LCM of a set of nums
int lcmm(int *args, int n) {
	long result = 1;
	long temp;
	for (int i = 0; i < n; i++) {
		temp = result;
		result = lcm(result, args[i]);
		printf("LCM of %ld, %d: %ld\n", temp, args[i], result);
	}
	return result;
}

int main() {
	int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	int n = sizeof(nums) / sizeof(nums[0]);
	long lcmNum = lcmm(nums, n);
	printf("LCM of integers 1...20: %ld\n", lcmNum);
	return 0;
}