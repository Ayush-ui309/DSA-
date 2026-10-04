# Kadane's Algorithm

**Common algorithm — used as a helper in LeetCode 918**

## Approach

- Maintain the current subarray sum and maximum sum found so far.
- If current sum becomes negative, reset it to `0` because it cannot help a future subarray.
- Keep the maximum value in `msum`.

## Key Concept

- Kadane's Algorithm finds the maximum sum of a contiguous subarray in O(n).
- `csum` = current subarray sum.
- `msum` = maximum subarray sum found so far.

## Dry Run

`[-2,1,-3,4,-1,2,1,-5,4]`

Maximum subarray: `[4,-1,2,1]` → `6`

## Complexity

| | Complexity |
|---|---|
| Time | O(n) |
| Space | O(1) |