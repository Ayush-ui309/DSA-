# Continuous Subarray Sum

**LeetCode: 523**

## Approach

- Maintain the prefix sum up to the current index.
- Store `sum % k` as the key and its first index as the value.
- If the same remainder appears again, the difference between the two prefix sums is divisible by `k`.
- Check that the subarray contains at least 2 elements.
- Store only the first index of each remainder to maximize the subarray length.

## Key Concept

- **Prefix Sum** — cumulative sum from the beginning up to the current index.
- Hashing avoids checking all possible subarrays.
- Same remainder means the subarray between those indices has a sum divisible by `k`.
- `m[0] = -1` handles a valid subarray beginning at index `0` and makes `i - m[rem]` give the exact number of elements.

## Dry Run

`[6,3,8,2]`, `k = 5`

```
Prefix remainders: 1, 4, 2, 4
Remainder 4 repeats → subarray [8,2] has sum 10, divisible by 5.
```

## Complexity

| | Complexity |
|---|---|
| Time | O(n) |
| Space | O(n) |