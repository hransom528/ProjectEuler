# Harris Ransom
# Project Euler Q4: Largest Palindrome Product

# Checks if number is palindrome
def isPalindrome(n):
	return str(n) == str(n)[::-1]

# Find the largest palindrome product of two 3-digit numbers
def findLargestPalindrome():
	largestPalindrome = 0
	for i in reversed(range(100, 1000)):
		for j in reversed(range(100, 1000)):
			product = i * j
			if (product > largestPalindrome and isPalindrome(product)):
				largestPalindrome = product
				break
			elif (largestPalindrome > product):
				break
	return largestPalindrome


# Main
def main():
	result = findLargestPalindrome()
	print(f"Largest palindrome product: {result}")

# Dunder main
if __name__ == "__main__":
	main()