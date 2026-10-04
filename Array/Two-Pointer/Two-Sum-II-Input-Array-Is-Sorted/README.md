# Two Sum II — Input Array Is Sorted

**LeetCode: 167 | Topic: Array / Two Pointers**

## Approach

- Array is already sorted, so use two pointers.
- `i` starts from the beginning and `j` starts from the end.
- Calculate `numbers[i] + numbers[j]`.
- If the sum is greater than `target`, decrease `j` to reduce the sum.
- If the sum is less than `target`, increase `i` to increase the sum.
- When the sum equals `target`, return the two indices.
- LeetCode uses 1-based indices, so return `i+1` and `j+1`.

## Key Concept

- Two-pointer technique works because the array is sorted.
- Moving the right pointer decreases the possible sum.
- Moving the left pointer increases the possible sum.
- No extra data structure is required.

## Dry Run

`numbers = [2,7,11,15], target = 9`

```
2 + 15 = 17 → too large → j--
2 + 11 = 13 → too large → j--
2 +  7 =  9 → found     → return {1,2}
```

## Complexity

| | Complexity |
|---|---|
| Time | O(n) |
| Space | O(1) |