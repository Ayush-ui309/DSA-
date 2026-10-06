# Longest Substring Without Repeating Characters

**LeetCode: 3 | Topic: String / Sliding Window**

## Approach & Key Concept

- **Pattern:** Sliding Window + Unordered Set.
- A sliding window is a continuously maintained range of the string represented by two boundaries: `left` and `i`.
- `left` is the starting point of the current valid substring.
- `i` moves forward and expands the window.
- The set stores the characters currently present in the window.

## Why Sliding Window?

- We need the longest continuous substring containing no repeated characters.
- Instead of checking every possible substring, we maintain one window and adjust it whenever it becomes invalid.
- We expand the window by moving `i`.
- When a duplicate is found, we shrink the window from the left until that duplicate is removed.

## Core Logic

- `s2.find(s[i]) != s2.end()` → current character already exists in the window.
- `s2.erase(s[left])` → remove the character at the current left boundary.
- `left++` → move the left boundary forward.
- Once the duplicate is removed, insert the current character.
- `i - left + 1` gives the length of the current valid window.
- Update `maxCount` with the largest valid window.

## Dry Run

Input: `B A N E A N F C`

- `B A N E` → all distinct → length = 4 → `maxCount = 4`
- Next `A` is already present.
- Remove `B` and move `left`.
- `A` is still present, so remove `A` and move `left` again.
- Now valid window is `N E A` → length = 3.
- Continue expanding and shrinking whenever a duplicate appears.
- Maximum remains `4`.

## Why `unordered_set`?

- It stores the characters currently inside the window.
- It allows average O(1) `find`, `insert`, and `erase`.

## Complexity

| | Complexity |
|---|---|
| Time | O(n) |
| Auxiliary Space | O(n) |

> Although there is a `while` loop inside the `for` loop, total time is O(n) because `left` only moves forward and each character is removed at most once.
