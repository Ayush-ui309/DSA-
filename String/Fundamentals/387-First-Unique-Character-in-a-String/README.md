# First Unique Character in a String

**LeetCode: 387 | Topic: String / Fundamentals**

## Approach

- Use a frequency array of size 256 to store the count of every character.
- First pass: count the frequency of each character.
- Second pass: traverse the string from left to right.
- The first character whose frequency is 1 is the first unique character, so return its index.
- If no character occurs once, return -1.

## Why 256?

- The input may contain characters beyond lowercase English letters, so 256 safely covers the character range being considered.

## Complexity

| | Complexity |
|---|---|
| Time | O(n) |
| Space | O(1) fixed size array of 256 |
