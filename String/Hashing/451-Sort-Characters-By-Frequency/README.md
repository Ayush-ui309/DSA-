# Sort Characters By Frequency

**LeetCode: 451 | Topic: String / Hashing**

## Approach

- Use an `unordered_map` to count the frequency of every character.
- The map groups all occurrences of the same character together, so we now have only one entry per distinct character.
- Store each character and its frequency as a pair in a `vector<pair<char, int>>`.
- Sort the vector using a lambda comparator based on frequency in descending order.
- Traverse the sorted vector and append each character according to its frequency.
- This produces the required frequency-sorted string.

## Detailed Rationale

- **Why `unordered_map`?** We need fast average O(1) frequency updates while traversing the string.
- **Why `vector<pair<char, int>>`?** The map contains character-frequency pairs, and converting them into a vector allows us to sort those pairs easily.
- **Why sort?** The problem requires characters with higher frequency to appear first, so the character-frequency pairs must be ordered by frequency.
- **Why lambda comparator?** The default sort does not know that we want to compare the pairs using their frequency. A lambda comparator tells sort to compare `A.second > B.second`.
- **Why the inner loop?** If a character occurs `x` times, we append that character exactly `x` times.

## Note — Why `k` in Complexity?

- `n` = total number of characters in the original string.
- `k` = number of **distinct** characters stored in the `unordered_map` / vector.

Example:
```
s = "aaabbcccc"
n = 9, k = 3
```

After using the `unordered_map`, we no longer work with all `n` characters when creating the vector or sorting. The vector contains only: `(a, 3)`, `(b, 2)`, `(c, 4)`.

- Creating vector: O(k)
- Sorting vector: O(k log k)
- Output building: O(n)

## Key Interview Point

- `n` = total input characters
- `k` = distinct characters after grouping
- Operations on original string → O(n)
- Operations on grouped characters → O(k)
- Sorting grouped characters → O(k log k)

## Complexity

| | Complexity |
|---|---|
| Time | O(n + k log k) |
| Space | O(k) excluding output string |
