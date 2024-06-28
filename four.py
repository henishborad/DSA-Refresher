# FOUR


def count_subarrays_with_k_pairs(numbers, k):
    n = len(numbers)
    if n < 2 or k <= 0:
        return 0

    result = 0

    for start in range(n):
        freq = {}
        pairs = 0

        for end in range(start, n):
            if numbers[end] in freq:
                freq[numbers[end]] += 1
            else:
                freq[numbers[end]] = 1

            if freq[numbers[end]] % 2 == 0:
                pairs += 1

            if pairs >= k:
                result += 1

        if pairs < k:
            break

    return result
