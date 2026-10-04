# Remove Duplicates from Sorted Array

**LeetCode: 26**

## Approach

- Array is already sorted, so duplicates are adjacent.
- Use `i` to scan and `k` to place the next unique element.
- Compare `nums[i]` with `nums[k - 1]`.
- If different, place it at `nums[k]` and increment `k`.
- Return `k`.

## Key Concept

- Two pointers
- In-place modification

## Dry Run

`[1,1,2,2,3]`

- `1` → duplicate
- `2` → new → place at `nums[1]`
- `3` → new → place at `nums[2]`

Result: `[1,2,3]`

## Complexity

| | Complexity |
|---|---|
| Time | O(n) |
| Space | O(1) |