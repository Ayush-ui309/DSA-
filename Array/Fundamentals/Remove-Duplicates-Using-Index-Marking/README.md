# Remove Duplicates Using Index Marking

## Input / Output

- Input: Array whose elements lie within the given value range.
- Example: `[4,1,4,2,1]`
- Output: `[1,2,4]`
- Constraint: `a[i]` lies within the allowed index range.

## Approach

- Use the element value directly as an index.
- Mark its presence using `N[nums[i]] = 1`.
- Repeated values use the same position, so duplicates are removed.
- Scan the marking array in increasing order.
- Store marked values in `ans`.

## Key Concept

- Direct addressing
- Index marking
- Value → index
- Increasing index scan gives sorted output.

## Dry Run

`[4,1,4,2,1]`

Marked values: `1, 2, 4`

Result: `[1,2,4]`

## Complexity

| | Complexity |
|---|---|
| Time | O(n + R) |
| Space | O(R) |

`R` = allowed value range.