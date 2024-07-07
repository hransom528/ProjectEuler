# Harris Ransom
# Project Euler Q16: Power Digit Sum


def main():
	# Get the sum of the digits of 2^1000
	num = 2**1000
	sum = 0
	digits = [int(d) for d in str(num)]

	for digit in digits:
		sum += digit
	print(f"Sum of digits in 2^1000: {sum}")

if __name__ == "__main__":
	main()