# Find All Numbers Disappeared in an Array

**LeetCode: 448**

## Approach

- `1 <= nums[i] <= n`, so values can be mapped to indices.
- Mark index `x - 1` as negative for every value `x`.
- After marking, a positive position represents a missing number.
- Push `i + 1` into the answer.
- Use `abs()` because values may already be negative.

## Key Concept

- Index marking
- In-place sign marking
- Positive position → missing number

## Dry Run

`[4,3,2,7,8,2,3,1]`

- Mark positions for `1,2,3,4,7,8`.
- Positions `5` and `6` remain positive.

Result: `[5,6]`

## Complexity

| | Complexity |
|---|---|
| Time | O(n) |
| Space | O(1), excluding output vector |