# Find All Duplicates in an Array

**LeetCode: 442**

## Approach

- `1 <= nums[i] <= n`, so each value can be used as an index.
- Use `x - 1` as the index for value `x`.
- Mark the position negative on the first occurrence.
- If the position is already negative, the value is a duplicate.
- Use `abs()` to get the original positive value.

## Key Concept

- Index marking
- In-place sign marking
- Value `x` → index `x - 1`

## Dry Run

`[4,3,2,7,8,2,3,1]`

- First `2` → mark its position negative.
- Second `2` → position already negative → add `2`.

Result: `[2,3]`

## Complexity

| | Complexity |
|---|---|
| Time | O(n) |
| Space | O(1), excluding output vector |