# Valid Palindrome

**LeetCode: 125 | Topic: String / Two Pointers**

## Approach & Key Concept

- **Pattern:** Two Pointers.
- `i` starts from the left and `j` starts from the right.
- The for-loop uses a condition-based update: `for(int i=0, j=n-1; i<j; )`
- The update section is intentionally empty because `i` and `j` are moved inside the loop depending on the current characters.

## Why `isalnum()`?

- The problem considers only letters and digits.
- `isalnum()` checks whether a character is alphanumeric:
  - letters → valid
  - digits → valid
  - spaces, punctuation, and symbols → ignored
- Provided by `<cctype>`.

## Pointer Movement

- If `s[i]` is not alphanumeric → `i++`
- Else if `s[j]` is not alphanumeric → `j--`
- Otherwise both are valid characters, so compare them after converting to lowercase.

## Why `tolower()`?

- The palindrome check is case-insensitive.
- Therefore, `A` and `a` must be treated as the same character.

## Core Idea

- Compare the leftmost valid character with the rightmost valid character.
- If they differ → immediately return `false`.
- If they match → move both pointers inward.
- If all valid character pairs match → return `true`.

## Complexity

| | Complexity |
|---|---|
| Time | O(n) |
| Auxiliary Space | O(1) |
