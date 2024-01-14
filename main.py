def factorial(n):
    # Base case
    if n == 0 or n == 1:
        return 1
    # Recursive case
    else:
        return n * factorial(n - 1)


# Testing the factorial function
result = factorial(5)
print(result)  # Output: 120
