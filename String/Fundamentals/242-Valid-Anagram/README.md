# Valid Anagram

**LeetCode: 242 | Topic: String / Fundamentals**

## Approach & Key Concept

- An anagram contains the same characters with the same frequencies; only the order can differ.
- First compare the lengths. Different lengths immediately mean they cannot be anagrams.
- Use a frequency array of size 26 because the input contains lowercase English letters.
- For every position, increment the frequency of the character from `s` and decrement the frequency of the character from `t`.
- If both strings contain exactly the same character frequencies, all 26 frequency values become 0.
- If any value is non-zero, the strings are not anagrams.

## Why One Frequency Array?

- Characters in `s` add to the count.
- Characters in `t` subtract from the count.
- Matching frequencies cancel each other to zero.

## Complexity

| | Complexity |
|---|---|
| Time | O(n) |
| Auxiliary Space | O(1) fixed array of size 26 |
