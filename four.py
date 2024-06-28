# FOUR


# dont change their function and variable names
def count_subarrays_with_k_pairs(numbers, k):
    from collections import defaultdict

    n = len(numbers)
    result = 0

    for start in range(n):
        freq = defaultdict(int)
        pairs = 0

        for end in range(start, n):
            freq[numbers[end]] += 1
            if freq[numbers[end]] % 2 == 0:
                pairs += 1

            if pairs >= k:
                result += 1

    return result
