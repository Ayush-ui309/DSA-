# Subarray Sums Divisible by K

**LeetCode: 974 | Topic: Prefix Sum + Hashing**

## Approach & Key Concept

- Use **prefix sum** to maintain the cumulative sum up to the current index.
- Instead of checking every possible subarray, calculate:
  - `rem = prefixSum % k`
- If two prefix sums have the **same remainder**, their difference is divisible by `k`.
  - Therefore, the elements between those two prefix sums form a valid subarray.
- Use an `unordered_map` to store:
  - **Key:** remainder
  - **Value:** frequency of that remainder seen so far.
- If the current remainder has already appeared `mp[rem]` times:
  - `ans += mp[rem]`
  - Each previous occurrence forms one valid subarray ending at the current index.
- If the remainder has not appeared before, `mp[rem]` is automatically `0`, so nothing is added to `ans`.
- Then store the current occurrence using `mp[rem]++`.
- Initialize `mp[0] = 1`:
  - This represents an empty prefix before index `0`.
  - It allows subarrays starting from index `0` to be counted correctly.
- If the remainder is negative, add `k`:
  - `rem += k`
  - This normalizes the remainder into the range `0` to `k-1`.
- **Important:** Here we store the **frequency**, not the index, because the same remainder can occur multiple times and every previous occurrence can form a different valid subarray.

## Why Prefix Sum?

- Without prefix sum, we would need to generate all possible subarrays and calculate their sums — O(n²) time.
- Prefix sum lets us identify whether a subarray sum is divisible by `k` using the relationship between two prefix-sum remainders.

## Why Hashing?

- The `unordered_map` lets us store and quickly find the frequency of previously seen remainders.
- Instead of explicitly checking every possible subarray, we directly count how many previous prefix sums can form a valid subarray with the current prefix sum.

## Example

For `nums = [4,5,0,-2,-3,1]`, `k = 5`:

```
Prefix-sum remainders repeat.
Every repeated remainder represents valid subarrays whose sum is divisible by 5.
mp[rem] tells how many such previous prefix sums exist → add that frequency to ans.
```

## Complexity

| | Complexity |
|---|---|
| Time | O(n) average |
| Space | O(k) for the possible remainders |