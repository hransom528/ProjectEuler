# Harris Ransom
# Project Euler Q20: Factorial Digit Sum

# Calculates the factorial of a number
def factorial(n):
	factorials = [0]
	factorials[0] = 1

	# Get the factorial of n
	for i in range(1, n + 1):
		factorials.append(i * factorials[i - 1])
	return factorials[n-1]

# Main
def main():
	# Get the sum of the digits of 2^1000
	num = factorial(100)
	print(f"100!: {num}")
	sum = 0
	digits = [int(d) for d in str(num)]

	for digit in digits:
		sum += digit
	print(f"Sum of digits in 100!: {sum}")

# Dunder main
if __name__ == "__main__":
	main()