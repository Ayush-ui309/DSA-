# Rearrange Array Elements by Sign

**LeetCode: 2149 | Topic: Array / Fundamentals**

## Approach and Key Concept

- Maintain separate positions for positive and negative numbers.
- `i = 0` points to the next even index for a positive number.
- `j = 1` points to the next odd index for a negative number.
- `k` scans every element of the input array.
- If `nums[k]` is positive, place it at `ans[i]` and move `i` by 2.
- If `nums[k]` is negative, place it at `ans[j]` and move `j` by 2.
- This automatically maintains the required alternating pattern: positive, negative, positive, negative...

## Why a Separate `ans` Array?

- `k` is used to scan the original array, while `i` and `j` represent positions in the result.
- This avoids confusing the input traversal with the output positions.

## Complexity

| | Complexity |
|---|---|
| Time | O(n) |
| Auxiliary Space | O(n) for the result array |
