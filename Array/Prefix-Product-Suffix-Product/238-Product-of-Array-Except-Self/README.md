# Product of Array Except Self

**LeetCode: 238 | Topic: Prefix Product + Suffix Product**

## Approach

- For every index: `answer = prefix product × suffix product`.
- Initially `ans` contains 1.
- The prefix product of the first element is 1, so start the prefix loop from `i = 1`.
- Store the prefix product directly inside `ans`.
- `ans[i - 1]` already contains the previous prefix product, so: `ans[i] = ans[i - 1] * nums[i - 1]`.
- After the first pass, `ans` contains all prefix products.
- The suffix product of the last element is also 1, so start the second loop from `i = n - 2`.
- Maintain only one `suffix` variable.
- Update the suffix first, then multiply it with the prefix product already stored in `ans`.
- Thus `ans[i]` finally becomes: `prefix product × suffix product`.

## Dry Run

`nums = [1, 5, 9, 4]`

After prefix pass:
`ans = [1, 1, 5, 45]`

Processing right to left:
```
i = 2 → suffix = 4            → ans[2] = 5 × 4 = 20
i = 1 → suffix = 4 × 9 = 36   → ans[1] = 1 × 36 = 36
i = 0 → suffix = 36 × 5 = 180 → ans[0] = 1 × 180 = 180
```

Final Result: `[180, 36, 20, 45]`

## Key Concept

- Prefix product is stored directly in the output array.
- No separate prefix array is required.
- Only one `suffix` variable is required for the second pass.
- The first element's prefix and last element's suffix are naturally 1.
- This avoids division and also handles zero values naturally.
- Do not confuse this with prefix sum; this is specifically **prefix PRODUCT + suffix PRODUCT**.
- The output array is not counted as auxiliary space for this problem.

## Complexity

| | Complexity |
|---|---|
| Time | O(n) |
| Space | O(1) auxiliary space |