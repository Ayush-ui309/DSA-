# Maximum Subarray Sum Circular

**LeetCode: 918**

## Approach

- First find the normal maximum subarray using Kadane.
- For circular maximum, use `total sum - minimum subarray sum`.
- Find the minimum subarray by reversing the signs and applying Kadane.
- Compare circular and non-circular answers.
- If all elements are negative, return the normal Kadane result.

## Key Concept

- Circular maximum = `total sum + Kadane(inverted array)`.
- Sign inversion converts the minimum subarray problem into a maximum subarray problem.
- Kadane is reused instead of writing another subarray algorithm.

## Dry Run

`[5,4,-2,3]`

```
Total = 10
Minimum subarray = -2
Circular result  = 10 - (-2) = 12
```

## Complexity

| | Complexity |
|---|---|
| Time | O(n) |
| Space | O(1) |