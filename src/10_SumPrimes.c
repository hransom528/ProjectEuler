// Harris Ransom
// Project Euler Q10: Summation of Primes

#include <stdio.h>
#include <stdbool.h>

// TODO: Optimize prime detection algorithm
bool isPrime(int num) {
    for (int i = 2; i < num / 2; i++) {
        if (num % i == 0) {
            return false;
			break;
        }
    }
    return true;
}

int main() {
	const int RANGE = 2000000;
	long long sum;

	for (int i = 2; i < RANGE; i++) {
		if (isPrime(i)) {
			printf("Prime Number: %d\n", i);
			sum += i;
		}
	}

	printf("Sum of prime nums below %d: %lld\n", RANGE, sum);
	return 0;
}