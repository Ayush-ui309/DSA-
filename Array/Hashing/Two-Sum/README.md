# Two Sum

**LeetCode: 1 | Topic: Array / Hashing**

## Approach

- Array is unsorted, so two pointers cannot be directly applied.
- For every `nums[i]`, calculate the required value: `need = target - nums[i]`.
- Store each element as a key and its index as the value in an `unordered_map`.
- If `need` already exists, the required pair is found.
- Return the stored index and current index.
- If `need` is not present, store the current element for future elements.

## Key Concept

- Two Sum: `A1 + A2 = target`.
- Therefore, for the current value, the required partner is `target - current value`.
- Hashing allows average O(1) lookup instead of searching the remaining array.

## Dry Run

`nums = [2,7,11,15], target = 9`

```
2 → need 7 → not found → store 2
7 → need 2 → found → return {0,1}
```

## Complexity

| | Complexity |
|---|---|
| Time | O(n) average |
| Space | O(n) |